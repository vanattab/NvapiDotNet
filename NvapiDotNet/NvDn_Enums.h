#pragma once

public enum struct Nvdn_Status{
    [EnumDescriptionAttribute("NVAPI_OK: Success. Request is completed.")] 
    NVAPI_OK = 0,      //!< Success. Request is completed.
    [EnumDescriptionAttribute("NVAPI_Error: Generic error code.")]
    NVAPI_ERROR = -1,      //!< Generic error
    [EnumDescriptionAttribute("NVAPI_LIBRARY_NOT_FOUND: NVAPI support library cannot be loaded.")]
    NVAPI_LIBRARY_NOT_FOUND = -2,      //!< NVAPI support library cannot be loaded.
    [EnumDescriptionAttribute("NVAPI_NO_IMPLEMENTATION: not implemented in current driver installation")]
    NVAPI_NO_IMPLEMENTATION = -3,      //!< not implemented in current driver installation
    [EnumDescriptionAttribute("NVAPI_API_NOT_INITIALIZED: NvAPI_Initialize has not been called (successfully)")]
    NVAPI_API_NOT_INITIALIZED = -4,      //!< NvAPI_Initialize has not been called (successfully)
    [EnumDescriptionAttribute("NVAPI_INVALID_ARGUMENT : The argument/parameter value is not valid or NULL.")]
    NVAPI_INVALID_ARGUMENT = -5,      //!< The argument/parameter value is not valid or NULL.
    [EnumDescriptionAttribute("NVAPI_NVIDIA_DEVICE_NOT_FOUND: No NVIDIA display driver")]
    NVAPI_NVIDIA_DEVICE_NOT_FOUND = -6,      //!< No NVIDIA display driver, or NVIDIA GPU driving a display, was found.
    [EnumDescriptionAttribute("NVAPI_END_ENUMERATION: No more items to enumerate")]
    NVAPI_END_ENUMERATION = -7,      //!< No more items to enumerate
    [EnumDescriptionAttribute("NVAPI_INVALID_HANDLE: Invalid handle")]
    NVAPI_INVALID_HANDLE = -8,      //!< Invalid handle
    [EnumDescriptionAttribute("NVAPI_INCOMPATIBLE_STRUCT_VERSION: An argument's structure version is not supported")]
    NVAPI_INCOMPATIBLE_STRUCT_VERSION = -9,      //!< An argument's structure version is not supported
    [EnumDescriptionAttribute("NVAPI_HANDLE_INVALIDATED: The handle is no longer valid (likely due to GPU or display re-configuration)")]
    NVAPI_HANDLE_INVALIDATED = -10,     //!< The handle is no longer valid (likely due to GPU or display re-configuration)
    [EnumDescriptionAttribute("NVAPI_OPENGL_CONTEXT_NOT_CURRENT: No NVIDIA OpenGL context is current (but needs to be)")]
    NVAPI_OPENGL_CONTEXT_NOT_CURRENT = -11,     //!< No NVIDIA OpenGL context is current (but needs to be)
    [EnumDescriptionAttribute("NVAPI_INVALID_POINTER: An invalid pointer")]
    NVAPI_INVALID_POINTER = -14,     //!< An invalid pointer, usually NULL, was passed as a parameter
    [EnumDescriptionAttribute("NVAPI_NO_GL_EXPERT: OpenGL Expert is not supported by the current drivers")]
    NVAPI_NO_GL_EXPERT = -12,     //!< OpenGL Expert is not supported by the current drivers
    [EnumDescriptionAttribute("NVAPI_INSTRUMENTATION_DISABLED: OpenGL Expert is supported")]
    NVAPI_INSTRUMENTATION_DISABLED = -13,     //!< OpenGL Expert is supported, but driver instrumentation is currently disabled
    [EnumDescriptionAttribute("NVAPI_NO_GL_NSIGHT: OpenGL does not support Nsight")]
    NVAPI_NO_GL_NSIGHT = -15,     //!< OpenGL does not support Nsight
    [EnumDescriptionAttribute("NVAPI_EXPECTED_LOGICAL_GPU_HANDLE: Expected a logical GPU handle for one or more parameters")]
    NVAPI_EXPECTED_LOGICAL_GPU_HANDLE = -100,    //!< Expected a logical GPU handle for one or more parameters
    [EnumDescriptionAttribute("NVAPI_EXPECTED_PHYSICAL_GPU_HANDLE: Expected a physical GPU handle for one or more parameters")]
    NVAPI_EXPECTED_PHYSICAL_GPU_HANDLE = -101,    //!< Expected a physical GPU handle for one or more parameters
    [EnumDescriptionAttribute("NVAPI_EXPECTED_DISPLAY_HANDLE: Expected an NV display handle for one or more parameters")]
    NVAPI_EXPECTED_DISPLAY_HANDLE = -102,    //!< Expected an NV display handle for one or more parameters
    [EnumDescriptionAttribute("NVAPI_INVALID_COMBINATION: The combination of parameters is not valid.")]
    NVAPI_INVALID_COMBINATION = -103,    //!< The combination of parameters is not valid. 
    [EnumDescriptionAttribute("NVAPI_NOT_SUPPORTED: Requested feature is not supported in the selected GPU")]
    NVAPI_NOT_SUPPORTED = -104,    //!< Requested feature is not supported in the selected GPU
    [EnumDescriptionAttribute("NVAPI_PORTID_NOT_FOUND: No port ID was found for the I2C transaction")]
    NVAPI_PORTID_NOT_FOUND = -105,    //!< No port ID was found for the I2C transaction
    [EnumDescriptionAttribute("NVAPI_EXPECTED_UNATTACHED_DISPLAY_HANDLE: Expected an unattached display handle as one of the input parameters.")]
    NVAPI_EXPECTED_UNATTACHED_DISPLAY_HANDLE = -106,    //!< Expected an unattached display handle as one of the input parameters.
    [EnumDescriptionAttribute("NVAPI_INVALID_PERF_LEVEL: Invalid perf level")]
    NVAPI_INVALID_PERF_LEVEL = -107,    //!< Invalid perf level 
    [EnumDescriptionAttribute("NVAPI_DEVICE_BUSY: Device is busy; request not fulfilled")]
    NVAPI_DEVICE_BUSY = -108,    //!< Device is busy; request not fulfilled
    [EnumDescriptionAttribute("NVAPI_NV_PERSIST_FILE_NOT_FOUND: NV persist file is not found")]
    NVAPI_NV_PERSIST_FILE_NOT_FOUND = -109,    //!< NV persist file is not found
    [EnumDescriptionAttribute("NVAPI_PERSIST_DATA_NOT_FOUND: NV persist data is not found")]
    NVAPI_PERSIST_DATA_NOT_FOUND = -110,    //!< NV persist data is not found
    [EnumDescriptionAttribute("NVAPI_EXPECTED_TV_DISPLAY: Expected a TV output display")]
    NVAPI_EXPECTED_TV_DISPLAY = -111,    //!< Expected a TV output display
    [EnumDescriptionAttribute("NVAPI_EXPECTED_TV_DISPLAY_ON_DCONNECTOR: Expected a TV output on the D Connector - HDTV_EIAJ4120.")]
    NVAPI_EXPECTED_TV_DISPLAY_ON_DCONNECTOR = -112,    //!< Expected a TV output on the D Connector - HDTV_EIAJ4120.
    [EnumDescriptionAttribute("NVAPI_NO_ACTIVE_SLI_TOPOLOGY: SLI is not active on this device.")]
    NVAPI_NO_ACTIVE_SLI_TOPOLOGY = -113,    //!< SLI is not active on this device.
    [EnumDescriptionAttribute("NVAPI_SLI_RENDERING_MODE_NOTALLOWED: Setup of SLI rendering mode is not possible right now.")]
    NVAPI_SLI_RENDERING_MODE_NOTALLOWED = -114,    //!< Setup of SLI rendering mode is not possible right now.
    [EnumDescriptionAttribute("NVAPI_EXPECTED_DIGITAL_FLAT_PANEL: Expected a digital flat panel.")]
    NVAPI_EXPECTED_DIGITAL_FLAT_PANEL = -115,    //!< Expected a digital flat panel.
    [EnumDescriptionAttribute("NVAPI_ARGUMENT_EXCEED_MAX_SIZE: Argument exceeds the expected size.")]
    NVAPI_ARGUMENT_EXCEED_MAX_SIZE = -116,    //!< Argument exceeds the expected size.
    [EnumDescriptionAttribute("NVAPI_DEVICE_SWITCHING_NOT_ALLOWED: Inhibit is ON due to one of the flags in NV_GPU_DISPLAY_CHANGE_INHIBIT or SLI active.")]
    NVAPI_DEVICE_SWITCHING_NOT_ALLOWED = -117,    //!< Inhibit is ON due to one of the flags in NV_GPU_DISPLAY_CHANGE_INHIBIT or SLI active.
    [EnumDescriptionAttribute("NVAPI_TESTING_CLOCKS_NOT_SUPPORTED: Testing of clocks is not supported.")]
    NVAPI_TESTING_CLOCKS_NOT_SUPPORTED = -118,    //!< Testing of clocks is not supported.
    [EnumDescriptionAttribute("NVAPI_UNKNOWN_UNDERSCAN_CONFIG: The specified underscan config is from an unknown source (e.g. INF)")]
    NVAPI_UNKNOWN_UNDERSCAN_CONFIG = -119,    //!< The specified underscan config is from an unknown source (e.g. INF)
    [EnumDescriptionAttribute("NVAPI_TIMEOUT_RECONFIGURING_GPU_TOPO: Timeout while reconfiguring GPUs")]
    NVAPI_TIMEOUT_RECONFIGURING_GPU_TOPO = -120,    //!< Timeout while reconfiguring GPUs
    [EnumDescriptionAttribute("NVAPI_DATA_NOT_FOUND: Requested data was not found")]
    NVAPI_DATA_NOT_FOUND = -121,    //!< Requested data was not found
    [EnumDescriptionAttribute("NVAPI_EXPECTED_ANALOG_DISPLAY: Expected an analog display")]
    NVAPI_EXPECTED_ANALOG_DISPLAY = -122,    //!< Expected an analog display
    [EnumDescriptionAttribute("NVAPI_NO_VIDLINK: No SLI video bridge is present")]
    NVAPI_NO_VIDLINK = -123,    //!< No SLI video bridge is present
    [EnumDescriptionAttribute("NVAPI_REQUIRES_REBOOT: NVAPI requires a reboot for the settings to take effect")]
    NVAPI_REQUIRES_REBOOT = -124,    //!< NVAPI requires a reboot for the settings to take effect
    [EnumDescriptionAttribute("NVAPI_INVALID_HYBRID_MODE: The function is not supported with the current Hybrid mode.")]
    NVAPI_INVALID_HYBRID_MODE = -125,    //!< The function is not supported with the current Hybrid mode.
    [EnumDescriptionAttribute("NVAPI_MIXED_TARGET_TYPES: The target types are not all the same")]
    NVAPI_MIXED_TARGET_TYPES = -126,    //!< The target types are not all the same
    [EnumDescriptionAttribute("NVAPI_SYSWOW64_NOT_SUPPORTED: The function is not supported from 32-bit on a 64-bit system.")]
    NVAPI_SYSWOW64_NOT_SUPPORTED = -127,    //!< The function is not supported from 32-bit on a 64-bit system.
    [EnumDescriptionAttribute("NVAPI_IMPLICIT_SET_GPU_TOPOLOGY_CHANGE_NOT_ALLOWED: There is no implicit GPU topology active. Use NVAPI_SetHybridMode to change topology.")]
    NVAPI_IMPLICIT_SET_GPU_TOPOLOGY_CHANGE_NOT_ALLOWED = -128,    //!< There is no implicit GPU topology active. Use NVAPI_SetHybridMode to change topology.
    [EnumDescriptionAttribute("NVAPI_REQUEST_USER_TO_CLOSE_NON_MIGRATABLE_APPS: Prompt the user to close all non-migratable applications.")]
    NVAPI_REQUEST_USER_TO_CLOSE_NON_MIGRATABLE_APPS = -129,      //!< Prompt the user to close all non-migratable applications.    
    [EnumDescriptionAttribute("NVAPI_OUT_OF_MEMORY: Could not allocate sufficient memory to complete the call.")]
    NVAPI_OUT_OF_MEMORY = -130,    //!< Could not allocate sufficient memory to complete the call.
    [EnumDescriptionAttribute("NVAPI_WAS_STILL_DRAWING: The previous operation that is transferring information to or from this surface is incomplete.")]
    NVAPI_WAS_STILL_DRAWING = -131,    //!< The previous operation that is transferring information to or from this surface is incomplete.
    [EnumDescriptionAttribute("NVAPI_FILE_NOT_FOUND: The file was not found.")]
    NVAPI_FILE_NOT_FOUND = -132,    //!< The file was not found.
    [EnumDescriptionAttribute("NVAPI_TOO_MANY_UNIQUE_STATE_OBJECTS: There are too many unique instances of a particular type of state object.")]
    NVAPI_TOO_MANY_UNIQUE_STATE_OBJECTS = -133,    //!< There are too many unique instances of a particular type of state object.
    [EnumDescriptionAttribute("NVAPI_INVALID_CALL: The method call is invalid. For example")]
    NVAPI_INVALID_CALL = -134,    //!< The method call is invalid. For example, a method's parameter may not be a valid pointer.
    [EnumDescriptionAttribute("NVAPI_D3D10_1_LIBRARY_NOT_FOUND: d3d10_1.dll cannot be loaded.")]
    NVAPI_D3D10_1_LIBRARY_NOT_FOUND = -135,    //!< d3d10_1.dll cannot be loaded.
    [EnumDescriptionAttribute("NVAPI_FUNCTION_NOT_FOUND: Couldn't find the function in the loaded DLL.")]
    NVAPI_FUNCTION_NOT_FOUND = -136,    //!< Couldn't find the function in the loaded DLL.
    [EnumDescriptionAttribute("NVAPI_INVALID_USER_PRIVILEGE: Current User is not Admin.")]
    NVAPI_INVALID_USER_PRIVILEGE = -137,    //!< Current User is not Admin.
    [EnumDescriptionAttribute("NVAPI_EXPECTED_NON_PRIMARY_DISPLAY_HANDLE: The handle corresponds to GDIPrimary.")]
    NVAPI_EXPECTED_NON_PRIMARY_DISPLAY_HANDLE = -138,    //!< The handle corresponds to GDIPrimary.
    [EnumDescriptionAttribute("NVAPI_EXPECTED_COMPUTE_GPU_HANDLE: Setting Physx GPU requires that the GPU is compute-capable.")]
    NVAPI_EXPECTED_COMPUTE_GPU_HANDLE = -139,    //!< Setting Physx GPU requires that the GPU is compute-capable.
    [EnumDescriptionAttribute("NVAPI_STEREO_NOT_INITIALIZED: The Stereo part of NVAPI failed to initialize completely. Check if the stereo driver is installed.")]
    NVAPI_STEREO_NOT_INITIALIZED = -140,    //!< The Stereo part of NVAPI failed to initialize completely. Check if the stereo driver is installed.
    [EnumDescriptionAttribute("NVAPI_STEREO_REGISTRY_ACCESS_FAILED: Access to stereo-related registry keys or values has failed.")]
    NVAPI_STEREO_REGISTRY_ACCESS_FAILED = -141,    //!< Access to stereo-related registry keys or values has failed.
    [EnumDescriptionAttribute("NVAPI_STEREO_REGISTRY_PROFILE_TYPE_NOT_SUPPORTED: The given registry profile type is not supported.")]
    NVAPI_STEREO_REGISTRY_PROFILE_TYPE_NOT_SUPPORTED = -142, //!< The given registry profile type is not supported.
    [EnumDescriptionAttribute("NVAPI_STEREO_REGISTRY_VALUE_NOT_SUPPORTED: The given registry value is not supported.")]
    NVAPI_STEREO_REGISTRY_VALUE_NOT_SUPPORTED = -143,    //!< The given registry value is not supported.
    [EnumDescriptionAttribute("NVAPI_STEREO_NOT_ENABLED: Stereo is not enabled and the function needed it to execute completely.")]
    NVAPI_STEREO_NOT_ENABLED = -144,    //!< Stereo is not enabled and the function needed it to execute completely.
    [EnumDescriptionAttribute("NVAPI_STEREO_NOT_TURNED_ON: Stereo is not turned on and the function needed it to execute completely.")]
    NVAPI_STEREO_NOT_TURNED_ON = -145,    //!< Stereo is not turned on and the function needed it to execute completely.
    [EnumDescriptionAttribute("NVAPI_STEREO_INVALID_DEVICE_INTERFACE: Invalid device interface.")]
    NVAPI_STEREO_INVALID_DEVICE_INTERFACE = -146,    //!< Invalid device interface.
    [EnumDescriptionAttribute("NVAPI_STEREO_PARAMETER_OUT_OF_RANGE: Separation percentage or JPEG image capture quality is out of [0-100] range.")]
    NVAPI_STEREO_PARAMETER_OUT_OF_RANGE = -147,    //!< Separation percentage or JPEG image capture quality is out of [0-100] range.
    [EnumDescriptionAttribute("NVAPI_STEREO_FRUSTUM_ADJUST_MODE_NOT_SUPPORTED: The given frustum adjust mode is not supported.")]
    NVAPI_STEREO_FRUSTUM_ADJUST_MODE_NOT_SUPPORTED = -148, //!< The given frustum adjust mode is not supported.
    [EnumDescriptionAttribute("NVAPI_TOPO_NOT_POSSIBLE: The mosaic topology is not possible given the current state of the hardware.")]
    NVAPI_TOPO_NOT_POSSIBLE = -149,    //!< The mosaic topology is not possible given the current state of the hardware.
    [EnumDescriptionAttribute("NVAPI_MODE_CHANGE_FAILED: An attempt to do a display resolution mode change has failed.")]
    NVAPI_MODE_CHANGE_FAILED = -150,    //!< An attempt to do a display resolution mode change has failed.        
    [EnumDescriptionAttribute("NVAPI_D3D11_LIBRARY_NOT_FOUND: d3d11.dll/d3d11_beta.dll cannot be loaded.")]
    NVAPI_D3D11_LIBRARY_NOT_FOUND = -151,    //!< d3d11.dll/d3d11_beta.dll cannot be loaded.
    [EnumDescriptionAttribute("NVAPI_INVALID_ADDRESS: Address is outside of valid range.")]
    NVAPI_INVALID_ADDRESS = -152,    //!< Address is outside of valid range.
    [EnumDescriptionAttribute("NVAPI_STRING_TOO_SMALL: The pre-allocated string is too small to hold the result.")]
    NVAPI_STRING_TOO_SMALL = -153,    //!< The pre-allocated string is too small to hold the result.
    [EnumDescriptionAttribute("NVAPI_MATCHING_DEVICE_NOT_FOUND: The input does not match any of the available devices.")]
    NVAPI_MATCHING_DEVICE_NOT_FOUND = -154,    //!< The input does not match any of the available devices.
    [EnumDescriptionAttribute("NVAPI_DRIVER_RUNNING: Driver is running.")]
    NVAPI_DRIVER_RUNNING = -155,    //!< Driver is running.
    [EnumDescriptionAttribute("NVAPI_DRIVER_NOTRUNNING: Driver is not running.")]
    NVAPI_DRIVER_NOTRUNNING = -156,    //!< Driver is not running.
    [EnumDescriptionAttribute("NVAPI_ERROR_DRIVER_RELOAD_REQUIRED: A driver reload is required to apply these settings.")]
    NVAPI_ERROR_DRIVER_RELOAD_REQUIRED = -157,    //!< A driver reload is required to apply these settings.
    [EnumDescriptionAttribute("NVAPI_SET_NOT_ALLOWED: Intended setting is not allowed.")]
    NVAPI_SET_NOT_ALLOWED = -158,    //!< Intended setting is not allowed.
    [EnumDescriptionAttribute("NVAPI_ADVANCED_DISPLAY_TOPOLOGY_REQUIRED: Information can't be returned due to advanced display topology.")]
    NVAPI_ADVANCED_DISPLAY_TOPOLOGY_REQUIRED = -159,    //!< Information can't be returned due to "advanced display topology".
    [EnumDescriptionAttribute("NVAPI_SETTING_NOT_FOUND: Setting is not found.")]
    NVAPI_SETTING_NOT_FOUND = -160,    //!< Setting is not found.
    [EnumDescriptionAttribute("NVAPI_SETTING_SIZE_TOO_LARGE: Setting size is too large.")]
    NVAPI_SETTING_SIZE_TOO_LARGE = -161,    //!< Setting size is too large.
    [EnumDescriptionAttribute("NVAPI_TOO_MANY_SETTINGS_IN_PROFILE: There are too many settings for a profile.")]
    NVAPI_TOO_MANY_SETTINGS_IN_PROFILE = -162,    //!< There are too many settings for a profile. 
    [EnumDescriptionAttribute("NVAPI_PROFILE_NOT_FOUND: Profile is not found.")]
    NVAPI_PROFILE_NOT_FOUND = -163,    //!< Profile is not found.
    [EnumDescriptionAttribute("NVAPI_PROFILE_NAME_IN_USE: Profile name is duplicated.")]
    NVAPI_PROFILE_NAME_IN_USE = -164,    //!< Profile name is duplicated.
    [EnumDescriptionAttribute("NVAPI_PROFILE_NAME_EMPTY: Profile name is empty.")]
    NVAPI_PROFILE_NAME_EMPTY = -165,    //!< Profile name is empty.
    [EnumDescriptionAttribute("NVAPI_EXECUTABLE_NOT_FOUND: Application not found in the Profile.")]
    NVAPI_EXECUTABLE_NOT_FOUND = -166,    //!< Application not found in the Profile.
    [EnumDescriptionAttribute("NVAPI_EXECUTABLE_ALREADY_IN_USE: Application already exists in the other profile.")]
    NVAPI_EXECUTABLE_ALREADY_IN_USE = -167,    //!< Application already exists in the other profile.
    [EnumDescriptionAttribute("NVAPI_DATATYPE_MISMATCH: Data Type mismatch")]
    NVAPI_DATATYPE_MISMATCH = -168,    //!< Data Type mismatch 
    [EnumDescriptionAttribute("NVAPI_PROFILE_REMOVED: The profile passed as parameter has been removed and is no longer valid.")]
    NVAPI_PROFILE_REMOVED = -169,    //!< The profile passed as parameter has been removed and is no longer valid.
    [EnumDescriptionAttribute("NVAPI_UNREGISTERED_RESOURCE: An unregistered resource was passed as a parameter.")]
    NVAPI_UNREGISTERED_RESOURCE = -170,    //!< An unregistered resource was passed as a parameter. 
    [EnumDescriptionAttribute("NVAPI_ID_OUT_OF_RANGE: The DisplayId corresponds to a display which is not within the normal outputId range.")]
    NVAPI_ID_OUT_OF_RANGE = -171,    //!< The DisplayId corresponds to a display which is not within the normal outputId range.
    [EnumDescriptionAttribute("NVAPI_DISPLAYCONFIG_VALIDATION_FAILED: Display topology is not valid so the driver cannot do a mode set on this configuration.")]
    NVAPI_DISPLAYCONFIG_VALIDATION_FAILED = -172,    //!< Display topology is not valid so the driver cannot do a mode set on this configuration.
    [EnumDescriptionAttribute("NVAPI_DPMST_CHANGED: Display Port Multi-Stream topology has been changed.")]
    NVAPI_DPMST_CHANGED = -173,    //!< Display Port Multi-Stream topology has been changed.
    [EnumDescriptionAttribute("NVAPI_INSUFFICIENT_BUFFER: Input buffer is insufficient to hold the contents.")]
    NVAPI_INSUFFICIENT_BUFFER = -174,    //!< Input buffer is insufficient to hold the contents.    
    [EnumDescriptionAttribute("NVAPI_ACCESS_DENIED: No access to the caller.")]
    NVAPI_ACCESS_DENIED = -175,    //!< No access to the caller.
    [EnumDescriptionAttribute("NVAPI_MOSAIC_NOT_ACTIVE: The requested action cannot be performed without Mosaic being enabled.")]
    NVAPI_MOSAIC_NOT_ACTIVE = -176,    //!< The requested action cannot be performed without Mosaic being enabled.
    [EnumDescriptionAttribute("NVAPI_SHARE_RESOURCE_RELOCATED: The surface is relocated away from video memory.")]
    NVAPI_SHARE_RESOURCE_RELOCATED = -177,    //!< The surface is relocated away from video memory.
    [EnumDescriptionAttribute("NVAPI_REQUEST_USER_TO_DISABLE_DWM: The user should disable DWM before calling NvAPI.")]
    NVAPI_REQUEST_USER_TO_DISABLE_DWM = -178,    //!< The user should disable DWM before calling NvAPI.
    [EnumDescriptionAttribute("NVAPI_D3D_DEVICE_LOST: D3D device status is D3DERR_DEVICELOST or D3DERR_DEVICENOTRESET - the user has to reset the device.")]
    NVAPI_D3D_DEVICE_LOST = -179,    //!< D3D device status is D3DERR_DEVICELOST or D3DERR_DEVICENOTRESET - the user has to reset the device.
    [EnumDescriptionAttribute("NVAPI_INVALID_CONFIGURATION: The requested action cannot be performed in the current state.")]
    NVAPI_INVALID_CONFIGURATION = -180,    //!< The requested action cannot be performed in the current state.
    [EnumDescriptionAttribute("NVAPI_STEREO_HANDSHAKE_NOT_DONE: Call failed as stereo handshake not completed.")]
    NVAPI_STEREO_HANDSHAKE_NOT_DONE = -181,    //!< Call failed as stereo handshake not completed.
    [EnumDescriptionAttribute("NVAPI_EXECUTABLE_PATH_IS_AMBIGUOUS: The path provided was too short to determine the correct NVDRS_APPLICATION")]
    NVAPI_EXECUTABLE_PATH_IS_AMBIGUOUS = -182,    //!< The path provided was too short to determine the correct NVDRS_APPLICATION
    [EnumDescriptionAttribute("NVAPI_DEFAULT_STEREO_PROFILE_IS_NOT_DEFINED: Default stereo profile is not currently defined")]
    NVAPI_DEFAULT_STEREO_PROFILE_IS_NOT_DEFINED = -183,    //!< Default stereo profile is not currently defined
    [EnumDescriptionAttribute("NVAPI_DEFAULT_STEREO_PROFILE_DOES_NOT_EXIST: Default stereo profile does not exist")]
    NVAPI_DEFAULT_STEREO_PROFILE_DOES_NOT_EXIST = -184,    //!< Default stereo profile does not exist
    [EnumDescriptionAttribute("NVAPI_CLUSTER_ALREADY_EXISTS: A cluster is already defined with the given configuration.")]
    NVAPI_CLUSTER_ALREADY_EXISTS = -185,    //!< A cluster is already defined with the given configuration.
    [EnumDescriptionAttribute("NVAPI_DPMST_DISPLAY_ID_EXPECTED: The input display id is not that of a multi stream enabled connector or a display device in a multi stream topology")]
    NVAPI_DPMST_DISPLAY_ID_EXPECTED = -186,    //!< The input display id is not that of a multi stream enabled connector or a display device in a multi stream topology 
    [EnumDescriptionAttribute("NVAPI_INVALID_DISPLAY_ID: The input display id is not valid or the monitor associated to it does not support the current operation")]
    NVAPI_INVALID_DISPLAY_ID = -187,    //!< The input display id is not valid or the monitor associated to it does not support the current operation
    [EnumDescriptionAttribute("NVAPI_STREAM_IS_OUT_OF_SYNC: While playing secure audio stream")]
    NVAPI_STREAM_IS_OUT_OF_SYNC = -188,    //!< While playing secure audio stream, stream goes out of sync
    [EnumDescriptionAttribute("NVAPI_INCOMPATIBLE_AUDIO_DRIVER: Older audio driver version than required")]
    NVAPI_INCOMPATIBLE_AUDIO_DRIVER = -189,    //!< Older audio driver version than required
    [EnumDescriptionAttribute("NVAPI_VALUE_ALREADY_SET: Value already set")]
    NVAPI_VALUE_ALREADY_SET = -190,    //!< Value already set, setting again not allowed.
    [EnumDescriptionAttribute("NVAPI_TIMEOUT: Requested operation timed out")]
    NVAPI_TIMEOUT = -191,    //!< Requested operation timed out 
    [EnumDescriptionAttribute("NVAPI_GPU_WORKSTATION_FEATURE_INCOMPLETE: The requested workstation feature set has incomplete driver internal allocation resources")]
    NVAPI_GPU_WORKSTATION_FEATURE_INCOMPLETE = -192,    //!< The requested workstation feature set has incomplete driver internal allocation resources
    [EnumDescriptionAttribute("NVAPI_STEREO_INIT_ACTIVATION_NOT_DONE: Call failed because InitActivation was not called.")]
    NVAPI_STEREO_INIT_ACTIVATION_NOT_DONE = -193,    //!< Call failed because InitActivation was not called.
    [EnumDescriptionAttribute("NVAPI_SYNC_NOT_ACTIVE: The requested action cannot be performed without Sync being enabled.")]
    NVAPI_SYNC_NOT_ACTIVE = -194,    //!< The requested action cannot be performed without Sync being enabled.    
    [EnumDescriptionAttribute("NVAPI_SYNC_MASTER_NOT_FOUND: The requested action cannot be performed without Sync Master being enabled.")]
    NVAPI_SYNC_MASTER_NOT_FOUND = -195,    //!< The requested action cannot be performed without Sync Master being enabled.
    [EnumDescriptionAttribute("NVAPI_INVALID_SYNC_TOPOLOGY: Invalid displays passed in the NV_GSYNC_DISPLAY pointer.")]
    NVAPI_INVALID_SYNC_TOPOLOGY = -196,    //!< Invalid displays passed in the NV_GSYNC_DISPLAY pointer.
    [EnumDescriptionAttribute("NVAPI_ECID_SIGN_ALGO_UNSUPPORTED: The specified signing algorithm is not supported. Either an incorrect value was entered or the current installed driver/hardware does not support the input value.")]
    NVAPI_ECID_SIGN_ALGO_UNSUPPORTED = -197,    //!< The specified signing algorithm is not supported. Either an incorrect value was entered or the current installed driver/hardware does not support the input value.
    [EnumDescriptionAttribute("NVAPI_ECID_KEY_VERIFICATION_FAILED: The encrypted public key verification has failed.")]
    NVAPI_ECID_KEY_VERIFICATION_FAILED = -198,    //!< The encrypted public key verification has failed.
    [EnumDescriptionAttribute("NVAPI_FIRMWARE_OUT_OF_DATE: The device's firmware is out of date.")]
    NVAPI_FIRMWARE_OUT_OF_DATE = -199,    //!< The device's firmware is out of date.
    [EnumDescriptionAttribute("NVAPI_FIRMWARE_REVISION_NOT_SUPPORTED: The device's firmware is not supported.")]
    NVAPI_FIRMWARE_REVISION_NOT_SUPPORTED = -200,    //!< The device's firmware is not supported.
};