﻿Imports NvapiDotNet
Imports AutomatedVisionTest.Graphics
Imports AutomatedVisionTest.Calibration
Imports System.Drawing
Imports System.Threading

Class MainWindow
  Private Sub Button_Click(sender As Object, e As RoutedEventArgs)
    Dim dispS As New DisplaySettings("Test", 50, 25, 1920, 1080, 1000, StereoProtocol.Nvidia_3DVision)
    Dim display As New Display("Test", "Null", 1, dispS)
    Dim dc As DisplayConfiguration = DisplayConfiguration.CreateSingleDisplayConfiguration(display)
    dc.StereoMode = StereoProtocol.Nvidia_3DVision
    Dim dw As New DisplayWindow(dc)

    Dim dThread As New Thread(AddressOf dw.StartDisplay)
    dThread.Start()
    dw.WaitForInitialization()

    NvCall(NvDn.NvDn_Initialize(), "Initialize() -> ")
    NvCall(NvDn.NvDn_Stereo_Enable(), "Stereo_Enable() -> ")

    Console.WriteLine("Monitors: ")
    For i As Integer = 0 To dw.D3D_9.AdapterCount - 1
      Console.WriteLine("Mon: " & i)
      Dim caps As NvDn_STEREO_CAPS = NvDn.NvDn_Stereo_GetStereoCaps(New NvDn_MonitorHandle(dw.D3D_9.GetAdapterMonitor(i)))
      Console.WriteLine("Version: " & caps.version & vbNewLine & "SupportStereoAutomatic: " & caps.supportWindowedModeAutomatic &
                        "SupportsStereoOff: " & caps.supportWindowedModeOff & "SupportsStereoPersistent: " & caps.supportsWindowedModePersistent)
      Console.WriteLine("")
    Next

    AutomatedVisionTest.Util.wait(3000)

    Dim sHand As New NvDn_StereoHandle()
    NvCall(NvDn.NvDn_Stereo_CreateHandleFromD3D_Device_Pointer(dw.Device.ComPointer, sHand), "Stereo_CreateHandleFromIUnknown")

    'Dim b As Boolean
    'NvDn.NvDn_Stereo_IsEnabled(b)
    'Dim sHand As New NvDn_StereoHandle()
    'Dim val As Single = 99
    'NvDn.NvDn_Stereo_GetConvergence(sHand, val)
    'Dim cval As Byte
    'NvDn.NvDn_Stereo_IsActivted(sHand, cval)
    ''NvDn.NvDn_Stereo_InitActivation(sHand, )
    'NvDn.NvDn_Stereo_InitActivation(sHand, NvDn_STEREO_INIT_ACTIVATION_FLAGS.NVAPI_STEREO_INIT_ACTIVATION_DELAYED)
    'NvDn.NvDn_Stereo_DeleteConfigurationProfileRegistryKey(NvDn_STEREO_REGISTRY_PROFILE_TYPE.NVAPI_STEREO_DEFAULT_REGISTRY_PROFILE)
    'MsgBox(val)
    'Console.WriteLine(b)
    'Console.WriteLine(EnumHelper.GetDesciption(NvDn_Status.NVAPI_OK))

    Using di As New SlimDX.DirectInput.DirectInput
      Dim kb = New SlimDX.DirectInput.Keyboard(di)
      kb.Acquire()

      While Not kb.GetCurrentState.IsPressed(SlimDX.DirectInput.Key.Escape)
      End While
      dw.ShutDownDisplay = True
    End Using
    'Application.Current.MainWindow.Close()
  End Sub

  Private Sub NvCall(status As NvDn_Status, Optional prefix As String = "")
    Console.WriteLine(prefix & EnumHelper.GetDesciption(status))
  End Sub
End Class
