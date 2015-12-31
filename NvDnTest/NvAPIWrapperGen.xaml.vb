Imports System.Text.RegularExpressions
'Imports AutomatedVisionTest.Util

Public Class NvAPIWrapperGen
  Public methods() As String = {"NvAPI Enum", "NvAPI Struct"}
  Private Sub Window_Loaded(sender As Object, e As RoutedEventArgs)
    methodSelector_cb.Items.Clear()
    For Each method In methods
      methodSelector_cb.Items.Add(method)
    Next
    methodSelector_cb.SelectedItem = methods(0)

  End Sub

  Private Sub Button_Click(sender As Object, e As RoutedEventArgs)
    Select Case methodSelector_cb.SelectedItem
      Case "NvAPI Enum"
        ParseNvAPIEnum(textBox1.Text)
      Case "NvAPI Struct"
    End Select
  End Sub

  Private Function ParseNvAPIEnum(nativeString As String) As String
    Dim cliCode As New List(Of String)
    Dim currentStruct As New List(Of String)
    textBox2.Text = ""

    Dim isNextLineInStruct As Boolean = False
    Dim currentStructName As String = " "
    Dim lines() As String = nativeString.Split({Environment.NewLine, vbNewLine, "\n"}, StringSplitOptions.RemoveEmptyEntries)
    For Each line In lines
      Dim lineCopy As String = line
      If line.Trim().StartsWith("typedef enum") AndAlso isNextLineInStruct = False Then
        If Not line.Trim = "typedef enum" Then
          currentStructName = line.Replace("typedef enum", "").Trim().Replace("_", "").Replace("Nv", "NvDn")
        End If
        currentStruct.Add("public enum class")
        textBox3.Text &= ("public enum class")
      ElseIf line.Trim().StartsWith("}") Then
        Dim pattern As String = "[a-zA-Z0-9_]+"
        'Dim pattern As String = "\}[a-zA-Z0-9_]*;"
        Dim m As Match = Regex.Match(line, pattern)
        If m.Success Then
          currentStructName = m.Value
        End If
        If currentStruct(0).EndsWith("{") Then
          currentStruct(0) = currentStruct(0).Insert(currentStruct(0).Count - 2, currentStructName)
        Else
          currentStruct(0) &= currentStructName
        End If
        currentStruct.Add(line.Replace(currentStructName, ""))
        textBox3.Text &= (line.Replace(currentStructName, ""))
        cliCode.AddRange(currentStruct)
        currentStruct.Clear()
        isNextLineInStruct = False
        currentStructName = ""
      Else
        currentStruct.Add(line)
        textBox3.Text &= (line)
      End If

    Next
    Return ""
  End Function

End Class
