/* GL dispatch header.
 * This is code-generated from the GL API XML files from Khronos.
 * 
 *     Copyright 2018 The ANGLE Project Authors. All rights reserved.
 *     Use of this source code is governed by a BSD-style license that can be
 *     found in the LICENSE file.
 * 
 *     egl_angle_ext.xml
 *         Includes data used to auto-generate ANGLE classes.
 *     
 */

#pragma once
#include <inttypes.h>
#include <stddef.h>

#include "epoxy/common.h"
#include "epoxy/gl.h"


#define EGL_ANGLE_colorspace_attribute_passthrough 1
#define EGL_ANGLE_context_virtualization 1
#define EGL_ANGLE_create_context_backwards_compatible 1
#define EGL_ANGLE_create_context_client_arrays 1
#define EGL_ANGLE_create_context_extensions_enabled 1
#define EGL_ANGLE_create_context_webgl_compatibility 1
#define EGL_ANGLE_create_surface_swap_interval 1
#define EGL_ANGLE_d3d_share_handle_client_buffer 1
#define EGL_ANGLE_d3d_texture_client_buffer 1
#define EGL_ANGLE_device_cgl 1
#define EGL_ANGLE_device_creation 1
#define EGL_ANGLE_device_d3d11 1
#define EGL_ANGLE_device_d3d9 1
#define EGL_ANGLE_device_eagl 1
#define EGL_ANGLE_device_metal 1
#define EGL_ANGLE_device_vulkan 1
#define EGL_ANGLE_direct_composition 1
#define EGL_ANGLE_display_power_preference 1
#define EGL_ANGLE_display_semaphore_share_group 1
#define EGL_ANGLE_display_texture_share_group 1
#define EGL_ANGLE_experimental_present_path 1
#define EGL_ANGLE_external_context_and_surface 1
#define EGL_ANGLE_feature_control 1
#define EGL_ANGLE_global_fence_sync 1
#define EGL_ANGLE_iosurface_client_buffer 1
#define EGL_ANGLE_keyed_mutex 1
#define EGL_ANGLE_memory_usage_report 1
#define EGL_ANGLE_metal_commands_scheduled_sync 1
#define EGL_ANGLE_metal_create_context_ownership_identity 1
#define EGL_ANGLE_metal_shared_event_sync 1
#define EGL_ANGLE_metal_texture_client_buffer 1
#define EGL_ANGLE_no_error 1
#define EGL_ANGLE_platform_angle 1
#define EGL_ANGLE_platform_angle_d3d 1
#define EGL_ANGLE_platform_angle_d3d11on12 1
#define EGL_ANGLE_platform_angle_d3d_luid 1
#define EGL_ANGLE_platform_angle_device_context_volatile_cgl 1
#define EGL_ANGLE_platform_angle_device_context_volatile_eagl 1
#define EGL_ANGLE_platform_angle_device_id 1
#define EGL_ANGLE_platform_angle_device_type_egl 1
#define EGL_ANGLE_platform_angle_device_type_swiftshader 1
#define EGL_ANGLE_platform_angle_metal 1
#define EGL_ANGLE_platform_angle_null 1
#define EGL_ANGLE_platform_angle_opengl 1
#define EGL_ANGLE_platform_angle_vulkan 1
#define EGL_ANGLE_platform_angle_vulkan_device_uuid 1
#define EGL_ANGLE_platform_angle_webgpu 1
#define EGL_ANGLE_power_preference 1
#define EGL_ANGLE_prepare_swap_buffers 1
#define EGL_ANGLE_program_cache_control 1
#define EGL_ANGLE_robust_resource_initialization 1
#define EGL_ANGLE_stream_producer_d3d_texture 1
#define EGL_ANGLE_surface_orientation 1
#define EGL_ANGLE_vulkan_display 1
#define EGL_ANGLE_vulkan_image 1
#define EGL_ANGLE_wait_until_work_scheduled 1
#define EGL_ANGLE_x11_visual 1
#define EGL_CHROMIUM_sync_control 1

#define EGL_LOW_POWER_ANGLE                                     0x0001
#define EGL_SURFACE_ORIENTATION_INVERT_X_ANGLE                  0x0001
#define EGL_HIGH_POWER_ANGLE                                    0x0002
#define EGL_SURFACE_ORIENTATION_INVERT_Y_ANGLE                  0x0002
#define EGL_PLATFORM_ANGLE_ANGLE                                0x3202
#define EGL_PLATFORM_ANGLE_TYPE_ANGLE                           0x3203
#define EGL_PLATFORM_ANGLE_MAX_VERSION_MAJOR_ANGLE              0x3204
#define EGL_PLATFORM_ANGLE_MAX_VERSION_MINOR_ANGLE              0x3205
#define EGL_PLATFORM_ANGLE_TYPE_DEFAULT_ANGLE                   0x3206
#define EGL_PLATFORM_ANGLE_TYPE_D3D9_ANGLE                      0x3207
#define EGL_PLATFORM_ANGLE_TYPE_D3D11_ANGLE                     0x3208
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_ANGLE                    0x3209
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_HARDWARE_ANGLE           0x320A
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_D3D_WARP_ANGLE           0x320B
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_D3D_REFERENCE_ANGLE      0x320C
#define EGL_PLATFORM_ANGLE_TYPE_OPENGL_ANGLE                    0x320D
#define EGL_PLATFORM_ANGLE_TYPE_OPENGLES_ANGLE                  0x320E
#define EGL_PLATFORM_ANGLE_ENABLE_AUTOMATIC_TRIM_ANGLE          0x320F
#define EGL_SWAP_INTERVAL_ANGLE                                 0x322F
#define EGL_DXGI_KEYED_MUTEX_ANGLE                              0x33A2
#define EGL_D3D_TEXTURE_ANGLE                                   0x33A3
#define EGL_X11_VISUAL_ID_ANGLE                                 0x33A3
#define EGL_EXPERIMENTAL_PRESENT_PATH_ANGLE                     0x33A4
#define EGL_DIRECT_COMPOSITION_ANGLE                            0x33A5
#define EGL_OPTIMAL_SURFACE_ORIENTATION_ANGLE                   0x33A7
#define EGL_SURFACE_ORIENTATION_ANGLE                           0x33A8
#define EGL_EXPERIMENTAL_PRESENT_PATH_FAST_ANGLE                0x33A9
#define EGL_EXPERIMENTAL_PRESENT_PATH_COPY_ANGLE                0x33AA
#define EGL_D3D_TEXTURE_SUBRESOURCE_ID_ANGLE                    0x33AB
#define EGL_CONTEXT_WEBGL_COMPATIBILITY_ANGLE                   0x33AC
#define EGL_PLATFORM_ANGLE_TYPE_NULL_ANGLE                      0x33AE
#define EGL_DISPLAY_TEXTURE_SHARE_GROUP_ANGLE                   0x33AF
#define EGL_PLATFORM_ANGLE_TYPE_VULKAN_ANGLE                    0x3450
#define EGL_PLATFORM_ANGLE_DEBUG_LAYERS_ENABLED                 0x3451
#define EGL_CONTEXT_CLIENT_ARRAYS_ENABLED_ANGLE                 0x3452
#define EGL_ROBUST_RESOURCE_INITIALIZATION_ANGLE                0x3453
#define EGL_IOSURFACE_ANGLE                                     0x3454
#define EGL_PROGRAM_CACHE_SIZE_ANGLE                            0x3455
#define EGL_PROGRAM_CACHE_KEY_LENGTH_ANGLE                      0x3456
#define EGL_PROGRAM_CACHE_RESIZE_ANGLE                          0x3457
#define EGL_PROGRAM_CACHE_TRIM_ANGLE                            0x3458
#define EGL_CONTEXT_PROGRAM_BINARY_CACHE_ENABLED_ANGLE          0x3459
#define EGL_IOSURFACE_PLANE_ANGLE                               0x345A
#define EGL_TEXTURE_RECTANGLE_ANGLE                             0x345B
#define EGL_TEXTURE_TYPE_ANGLE                                  0x345C
#define EGL_TEXTURE_INTERNAL_FORMAT_ANGLE                       0x345D
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_NULL_ANGLE               0x345E
#define EGL_EXTENSIONS_ENABLED_ANGLE                            0x345F
#define EGL_FEATURE_NAME_ANGLE                                  0x3460
#define EGL_FEATURE_CATEGORY_ANGLE                              0x3461
#define EGL_CONTEXT_MEMORY_USAGE_ANGLE                          0x3462
#define EGL_FEATURE_STATUS_ANGLE                                0x3464
#define EGL_FEATURE_COUNT_ANGLE                                 0x3465
#define EGL_FEATURE_OVERRIDES_ENABLED_ANGLE                     0x3466
#define EGL_FEATURE_OVERRIDES_DISABLED_ANGLE                    0x3467
#define EGL_FEATURE_ALL_DISABLED_ANGLE                          0x3469
#define EGL_PLATFORM_ANGLE_EGL_HANDLE_ANGLE                     0x3480
#define EGL_CONTEXT_VIRTUALIZATION_GROUP_ANGLE                  0x3481
#define EGL_POWER_PREFERENCE_ANGLE                              0x3482
#define EGL_CONTEXT_OPENGL_BACKWARDS_COMPATIBLE_ANGLE           0x3483
#define EGL_CGL_CONTEXT_ANGLE                                   0x3485
#define EGL_CGL_PIXEL_FORMAT_ANGLE                              0x3486
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_SWIFTSHADER_ANGLE        0x3487
#define EGL_PLATFORM_ANGLE_D3D11ON12_ANGLE                      0x3488
#define EGL_PLATFORM_ANGLE_TYPE_METAL_ANGLE                     0x3489
#define EGL_IOSURFACE_USAGE_HINT_ANGLE                          0x348A
#define EGL_EAGL_CONTEXT_ANGLE                                  0x348C
#define EGL_BIND_TO_TEXTURE_TARGET_ANGLE                        0x348D
#define EGL_DISPLAY_SEMAPHORE_SHARE_GROUP_ANGLE                 0x348D
#define EGL_EXTERNAL_CONTEXT_ANGLE                              0x348E
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_EGL_ANGLE                0x348E
#define EGL_EXTERNAL_SURFACE_ANGLE                              0x348F
#define EGL_PLATFORM_ANGLE_NATIVE_PLATFORM_TYPE_ANGLE           0x348F
#define EGL_PLATFORM_ANGLE_D3D_LUID_HIGH_ANGLE                  0x34A0
#define EGL_PLATFORM_ANGLE_D3D_LUID_LOW_ANGLE                   0x34A1
#define EGL_PLATFORM_ANGLE_DEVICE_CONTEXT_VOLATILE_EAGL_ANGLE   0x34A2
#define EGL_PLATFORM_ANGLE_DEVICE_CONTEXT_VOLATILE_CGL_ANGLE    0x34A3
#define EGL_PLATFORM_VULKAN_DISPLAY_MODE_SIMPLE_ANGLE           0x34A4
#define EGL_PLATFORM_VULKAN_DISPLAY_MODE_HEADLESS_ANGLE         0x34A5
#define EGL_METAL_DEVICE_ANGLE                                  0x34A6
#define EGL_METAL_TEXTURE_ANGLE                                 0x34A7
#define EGL_VULKAN_VERSION_ANGLE                                0x34A8
#define EGL_VULKAN_INSTANCE_ANGLE                               0x34A9
#define EGL_VULKAN_INSTANCE_EXTENSIONS_ANGLE                    0x34AA
#define EGL_VULKAN_PHYSICAL_DEVICE_ANGLE                        0x34AB
#define EGL_VULKAN_DEVICE_ANGLE                                 0x34AC
#define EGL_VULKAN_DEVICE_EXTENSIONS_ANGLE                      0x34AD
#define EGL_VULKAN_FEATURES_ANGLE                               0x34AE
#define EGL_VULKAN_QUEUE_ANGLE                                  0x34AF
#define EGL_VULKAN_QUEUE_FAMILIY_INDEX_ANGLE                    0x34D0
#define EGL_VULKAN_GET_INSTANCE_PROC_ADDR                       0x34D1
#define EGL_CONTEXT_METAL_OWNERSHIP_IDENTITY_ANGLE              0x34D2
#define EGL_VULKAN_IMAGE_ANGLE                                  0x34D3
#define EGL_VULKAN_IMAGE_CREATE_INFO_HI_ANGLE                   0x34D4
#define EGL_VULKAN_IMAGE_CREATE_INFO_LO_ANGLE                   0x34D5
#define EGL_PLATFORM_ANGLE_DEVICE_ID_HIGH_ANGLE                 0x34D6
#define EGL_PLATFORM_ANGLE_DEVICE_ID_LOW_ANGLE                  0x34D7
#define EGL_SYNC_METAL_SHARED_EVENT_ANGLE                       0x34D8
#define EGL_SYNC_METAL_SHARED_EVENT_OBJECT_ANGLE                0x34D9
#define EGL_SYNC_METAL_SHARED_EVENT_SIGNAL_VALUE_LO_ANGLE       0x34DA
#define EGL_SYNC_METAL_SHARED_EVENT_SIGNAL_VALUE_HI_ANGLE       0x34DB
#define EGL_PLATFORM_ANGLE_DISPLAY_KEY_ANGLE                    0x34DC
#define EGL_SYNC_METAL_SHARED_EVENT_SIGNALED_ANGLE              0x34DC
#define EGL_METAL_TEXTURE_ARRAY_SLICE_ANGLE                     0x34DD
#define EGL_SYNC_GLOBAL_FENCE_ANGLE                             0x34DE
#define EGL_PLATFORM_ANGLE_TYPE_WEBGPU_ANGLE                    0x34DF
#define EGL_SYNC_METAL_COMMANDS_SCHEDULED_ANGLE                 0x34E0
#define EGL_PLATFORM_ANGLE_VULKAN_DEVICE_UUID_ANGLE             0x34F0
#define EGL_PLATFORM_ANGLE_VULKAN_DRIVER_UUID_ANGLE             0x34F1
#define EGL_PLATFORM_ANGLE_VULKAN_DRIVER_ID_ANGLE               0x34F2

typedef void (GLAPIENTRY *PFNEGLACQUIREEXTERNALCONTEXTANGLEPROC)(EGLDisplay dpy, EGLSurface drawAndRead);
typedef void * (GLAPIENTRY *PFNEGLCOPYMETALSHAREDEVENTANGLEPROC)(EGLDisplay dpy, EGLSyncKHR sync);
typedef EGLDeviceEXT (GLAPIENTRY *PFNEGLCREATEDEVICEANGLEPROC)(EGLint device_type, void * native_device, const EGLAttrib * attrib_list);
typedef EGLBoolean (GLAPIENTRY *PFNEGLCREATESTREAMPRODUCERD3DTEXTUREANGLEPROC)(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
typedef EGLBoolean (GLAPIENTRY *PFNEGLDISPLAYATTRIBANGLEPROC)(EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef EGLBoolean (GLAPIENTRY *PFNEGLEXPORTVKIMAGEANGLEPROC)(EGLDisplay dpy, EGLImage image, void * vk_image, void * vk_image_create_info);
typedef void (GLAPIENTRY *PFNEGLFORCEGPUSWITCHANGLEPROC)(EGLDisplay dpy, EGLint gpuIDHigh, EGLint gpuIDLow);
typedef EGLBoolean (GLAPIENTRY *PFNEGLGETSYNCVALUESCHROMIUMPROC)(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * ust, EGLuint64KHR * msc, EGLuint64KHR * sbc);
typedef void (GLAPIENTRY *PFNEGLHANDLEGPUSWITCHANGLEPROC)(EGLDisplay dpy);
typedef void (GLAPIENTRY *PFNEGLLOCKVULKANQUEUEANGLEPROC)(EGLDisplay dpy);
typedef EGLBoolean (GLAPIENTRY *PFNEGLPREPARESWAPBUFFERSANGLEPROC)(EGLDisplay dpy, EGLSurface surface);
typedef EGLint (GLAPIENTRY *PFNEGLPROGRAMCACHEGETATTRIBANGLEPROC)(EGLDisplay dpy, EGLenum attrib);
typedef void (GLAPIENTRY *PFNEGLPROGRAMCACHEPOPULATEANGLEPROC)(EGLDisplay dpy, const void * key, EGLint keysize, const void * binary, EGLint binarysize);
typedef void (GLAPIENTRY *PFNEGLPROGRAMCACHEQUERYANGLEPROC)(EGLDisplay dpy, EGLint index, void * key, EGLint * keysize, void * binary, EGLint * binarysize);
typedef EGLint (GLAPIENTRY *PFNEGLPROGRAMCACHERESIZEANGLEPROC)(EGLDisplay dpy, EGLint limit, EGLint mode);
typedef EGLBoolean (GLAPIENTRY *PFNEGLQUERYDISPLAYATTRIBANGLEPROC)(EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef const char * (GLAPIENTRY *PFNEGLQUERYSTRINGIANGLEPROC)(EGLDisplay dpy, EGLint name, EGLint index);
typedef void (GLAPIENTRY *PFNEGLREACQUIREHIGHPOWERGPUANGLEPROC)(EGLDisplay dpy, EGLContext ctx);
typedef EGLBoolean (GLAPIENTRY *PFNEGLRELEASEDEVICEANGLEPROC)(EGLDeviceEXT device);
typedef void (GLAPIENTRY *PFNEGLRELEASEEXTERNALCONTEXTANGLEPROC)(EGLDisplay dpy);
typedef void (GLAPIENTRY *PFNEGLRELEASEHIGHPOWERGPUANGLEPROC)(EGLDisplay dpy, EGLContext ctx);
typedef void (GLAPIENTRY *PFNEGLSETVALIDATIONENABLEDANGLEPROC)(EGLBoolean validationState);
typedef EGLBoolean (GLAPIENTRY *PFNEGLSTREAMPOSTD3DTEXTUREANGLEPROC)(EGLDisplay dpy, EGLStreamKHR stream, void * texture, const EGLAttrib * attrib_list);
typedef void (GLAPIENTRY *PFNEGLUNLOCKVULKANQUEUEANGLEPROC)(EGLDisplay dpy);
typedef void (GLAPIENTRY *PFNEGLWAITUNTILWORKSCHEDULEDANGLEPROC)(EGLDisplay dpy);
EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglAcquireExternalContextANGLE)(EGLDisplay dpy, EGLSurface drawAndRead);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_eglCopyMetalSharedEventANGLE)(EGLDisplay dpy, EGLSyncKHR sync);

EPOXY_PUBLIC EGLDeviceEXT (EPOXY_CALLSPEC *epoxy_eglCreateDeviceANGLE)(EGLint device_type, void * native_device, const EGLAttrib * attrib_list);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglCreateStreamProducerD3DTextureANGLE)(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglDisplayAttribANGLE)(EGLDisplay dpy, EGLint attribute, EGLAttrib * value);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglExportVkImageANGLE)(EGLDisplay dpy, EGLImage image, void * vk_image, void * vk_image_create_info);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglForceGPUSwitchANGLE)(EGLDisplay dpy, EGLint gpuIDHigh, EGLint gpuIDLow);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglGetSyncValuesCHROMIUM)(EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * ust, EGLuint64KHR * msc, EGLuint64KHR * sbc);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglHandleGPUSwitchANGLE)(EGLDisplay dpy);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglLockVulkanQueueANGLE)(EGLDisplay dpy);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglPrepareSwapBuffersANGLE)(EGLDisplay dpy, EGLSurface surface);

EPOXY_PUBLIC EGLint (EPOXY_CALLSPEC *epoxy_eglProgramCacheGetAttribANGLE)(EGLDisplay dpy, EGLenum attrib);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglProgramCachePopulateANGLE)(EGLDisplay dpy, const void * key, EGLint keysize, const void * binary, EGLint binarysize);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglProgramCacheQueryANGLE)(EGLDisplay dpy, EGLint index, void * key, EGLint * keysize, void * binary, EGLint * binarysize);

EPOXY_PUBLIC EGLint (EPOXY_CALLSPEC *epoxy_eglProgramCacheResizeANGLE)(EGLDisplay dpy, EGLint limit, EGLint mode);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglQueryDisplayAttribANGLE)(EGLDisplay dpy, EGLint attribute, EGLAttrib * value);

EPOXY_PUBLIC const char * (EPOXY_CALLSPEC *epoxy_eglQueryStringiANGLE)(EGLDisplay dpy, EGLint name, EGLint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglReacquireHighPowerGPUANGLE)(EGLDisplay dpy, EGLContext ctx);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglReleaseDeviceANGLE)(EGLDeviceEXT device);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglReleaseExternalContextANGLE)(EGLDisplay dpy);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglReleaseHighPowerGPUANGLE)(EGLDisplay dpy, EGLContext ctx);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglSetValidationEnabledANGLE)(EGLBoolean validationState);

EPOXY_PUBLIC EGLBoolean (EPOXY_CALLSPEC *epoxy_eglStreamPostD3DTextureANGLE)(EGLDisplay dpy, EGLStreamKHR stream, void * texture, const EGLAttrib * attrib_list);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglUnlockVulkanQueueANGLE)(EGLDisplay dpy);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_eglWaitUntilWorkScheduledANGLE)(EGLDisplay dpy);

#define eglAcquireExternalContextANGLE epoxy_eglAcquireExternalContextANGLE
#define eglCopyMetalSharedEventANGLE epoxy_eglCopyMetalSharedEventANGLE
#define eglCreateDeviceANGLE epoxy_eglCreateDeviceANGLE
#define eglCreateStreamProducerD3DTextureANGLE epoxy_eglCreateStreamProducerD3DTextureANGLE
#define eglDisplayAttribANGLE epoxy_eglDisplayAttribANGLE
#define eglExportVkImageANGLE epoxy_eglExportVkImageANGLE
#define eglForceGPUSwitchANGLE epoxy_eglForceGPUSwitchANGLE
#define eglGetSyncValuesCHROMIUM epoxy_eglGetSyncValuesCHROMIUM
#define eglHandleGPUSwitchANGLE epoxy_eglHandleGPUSwitchANGLE
#define eglLockVulkanQueueANGLE epoxy_eglLockVulkanQueueANGLE
#define eglPrepareSwapBuffersANGLE epoxy_eglPrepareSwapBuffersANGLE
#define eglProgramCacheGetAttribANGLE epoxy_eglProgramCacheGetAttribANGLE
#define eglProgramCachePopulateANGLE epoxy_eglProgramCachePopulateANGLE
#define eglProgramCacheQueryANGLE epoxy_eglProgramCacheQueryANGLE
#define eglProgramCacheResizeANGLE epoxy_eglProgramCacheResizeANGLE
#define eglQueryDisplayAttribANGLE epoxy_eglQueryDisplayAttribANGLE
#define eglQueryStringiANGLE epoxy_eglQueryStringiANGLE
#define eglReacquireHighPowerGPUANGLE epoxy_eglReacquireHighPowerGPUANGLE
#define eglReleaseDeviceANGLE epoxy_eglReleaseDeviceANGLE
#define eglReleaseExternalContextANGLE epoxy_eglReleaseExternalContextANGLE
#define eglReleaseHighPowerGPUANGLE epoxy_eglReleaseHighPowerGPUANGLE
#define eglSetValidationEnabledANGLE epoxy_eglSetValidationEnabledANGLE
#define eglStreamPostD3DTextureANGLE epoxy_eglStreamPostD3DTextureANGLE
#define eglUnlockVulkanQueueANGLE epoxy_eglUnlockVulkanQueueANGLE
#define eglWaitUntilWorkScheduledANGLE epoxy_eglWaitUntilWorkScheduledANGLE
