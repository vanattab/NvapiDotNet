Imports NvapiDotNet
Imports SlimDX.Direct3D9


Class MainWindow
  Private Device As Device
  Private D3D As Direct3D
  Private pp As PresentParameters


  Private Sub Button_Click(sender As Object, e As RoutedEventArgs)

    Dim CanvasSource As Interop.HwndSource = Interop.HwndSource.FromVisual(mCanvas1)
    pp = New PresentParameters
    pp.Windowed = True
    pp.BackBufferWidth = 400
    pp.BackBufferHeight = 400
    pp.DeviceWindowHandle = CanvasSource.Handle
    D3D = New Direct3D

    Device = New Device(D3D, 0, DeviceType.Hardware, CanvasSource.Handle, CreateFlags.HardwareVertexProcessing, pp)

    NvCall(NvDn.NvDn_Initialize(), "Initialize() -> ")
    NvCall(NvDn.NvDn_Stereo_Enable(), "Stereo_Enable() -> ")

    Console.WriteLine("Monitors: ")
    For i As Integer = 0 To D3D.AdapterCount - 1
      Console.WriteLine("Mon: " & i)
      Dim caps As NvDn_STEREO_CAPS = NvDn.NvDn_Stereo_GetStereoCaps(New NvDn_MonitorHandle(D3D.GetAdapterMonitor(i)))
      Console.WriteLine("Version: " & caps.version & vbNewLine & "SupportStereoAutomatic: " & caps.supportWindowedModeAutomatic &
                        "SupportsStereoOff: " & caps.supportWindowedModeOff & "SupportsStereoPersistent: " & caps.supportsWindowedModePersistent)
      Console.WriteLine("")
    Next


    Dim sHand As New NvDn_StereoHandle()
    NvCall(NvDn.NvDn_Stereo_CreateHandleFromD3D_Device_Pointer(Device.ComPointer, sHand), "Stereo_CreateHandleFromIUnknown")

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
        Device.ColorFill(Device.GetBackBuffer(0, 0), New SlimDX.Color4(0, 0, 128))
      End While
    End Using
    Device.Dispose()
    D3D.Dispose()
    'Application.Current.MainWindow.Close()
  End Sub

  Private Sub NvCall(status As NvDn_Status, Optional prefix As String = "")
    Console.WriteLine(prefix & EnumHelper.GetDesciption(status))
  End Sub
End Class
