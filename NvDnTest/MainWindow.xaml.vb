Imports NvapiDotNet
Class MainWindow
  Private Sub Button_Click(sender As Object, e As RoutedEventArgs)
    Console.WriteLine(NvDn.NvDn_Initialize())
    Dim b As Boolean
    NvDn.NvDn_Stereo_IsEnabled(b)
    Dim sHand As New NvDn_StereoHandle()
    Dim val As Single = 99
    NvDn.NvDn_Stereo_GetConvergence(sHand, val)
    Dim cval As Byte
    NvDn.NvDn_Stereo_IsActivted(sHand, cval)
    NvDn.NvDn_Stereo_InitActivation(sHand, _NVAPI_STEREO_INIT_ACTIVATION_FLAGS)
    MsgBox(val)
    Console.WriteLine(b)
    Console.WriteLine(EnumHelper.GetDesciption(NvDn_Status.NVAPI_OK))
  End Sub
End Class
