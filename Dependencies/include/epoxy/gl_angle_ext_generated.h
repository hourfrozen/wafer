/* GL dispatch header.
 * This is code-generated from the GL API XML files from Khronos.
 * 
 *     Copyright 2018 The ANGLE Project Authors. All rights reserved.
 *     Use of this source code is governed by a BSD-style license that can be
 *     found in the LICENSE file.
 * 
 *     gl_angle_ext.xml
 *         Includes data used to auto-generate ANGLE classes.
 *     
 */

#pragma once
#include <inttypes.h>
#include <stddef.h>

#include "epoxy/common.h"
#include "epoxy/gl.h"


#define GL_ANGLE_base_vertex_base_instance 1
#define GL_ANGLE_clip_cull_distance 1
#define GL_ANGLE_copy_texture_3d 1
#define GL_ANGLE_get_image 1
#define GL_ANGLE_get_tex_level_parameter 1
#define GL_ANGLE_logic_op 1
#define GL_ANGLE_memory_object_flags 1
#define GL_ANGLE_memory_object_fuchsia 1
#define GL_ANGLE_multi_draw 1
#define GL_ANGLE_polygon_mode 1
#define GL_ANGLE_provoking_vertex 1
#define GL_ANGLE_renderability_validation 1
#define GL_ANGLE_request_extension 1
#define GL_ANGLE_robust_client_memory 1
#define GL_ANGLE_robust_resource_initialization 1
#define GL_ANGLE_semaphore_fuchsia 1
#define GL_ANGLE_shader_pixel_local_storage 1
#define GL_ANGLE_stencil_texturing 1
#define GL_ANGLE_texture_external_update 1
#define GL_ANGLE_texture_multisample 1
#define GL_ANGLE_vulkan_image 1
#define GL_CHROMIUM_bind_uniform_location 1
#define GL_CHROMIUM_copy_compressed_texture 1
#define GL_CHROMIUM_copy_texture 1
#define GL_CHROMIUM_framebuffer_mixed_samples 1
#define GL_CHROMIUM_lose_context 1

#define GL_CREATE_SPARSE_BINDING_BIT_ANGLE                                  0x00000001
#define GL_USAGE_TRANSFER_SRC_BIT_ANGLE                                     0x00000001
#define GL_CREATE_SPARSE_RESIDENCY_BIT_ANGLE                                0x00000002
#define GL_USAGE_TRANSFER_DST_BIT_ANGLE                                     0x00000002
#define GL_CREATE_SPARSE_ALIASED_BIT_ANGLE                                  0x00000004
#define GL_USAGE_SAMPLED_BIT_ANGLE                                          0x00000004
#define GL_CREATE_MUTABLE_FORMAT_BIT_ANGLE                                  0x00000008
#define GL_USAGE_STORAGE_BIT_ANGLE                                          0x00000008
#define GL_CREATE_CUBE_COMPATIBLE_BIT_ANGLE                                 0x00000010
#define GL_USAGE_COLOR_ATTACHMENT_BIT_ANGLE                                 0x00000010
#define GL_CREATE_2D_ARRAY_COMPATIBLE_BIT_ANGLE                             0x00000020
#define GL_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT_ANGLE                         0x00000020
#define GL_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_ANGLE                     0x00000040
#define GL_USAGE_TRANSIENT_ATTACHMENT_BIT_ANGLE                             0x00000040
#define GL_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_ANGLE                     0x00000080
#define GL_USAGE_INPUT_ATTACHMENT_BIT_ANGLE                                 0x00000080
#define GL_CREATE_EXTENDED_USAGE_BIT_ANGLE                                  0x00000100
#define GL_USAGE_SHADING_RATE_IMAGE_BIT_ANGLE                               0x00000100
#define GL_CREATE_DISJOINT_BIT_ANGLE                                        0x00000200
#define GL_USAGE_FRAGMENT_DENSITY_MAP_BIT_ANGLE                             0x00000200
#define GL_CREATE_ALIAS_BIT_ANGLE                                           0x00000400
#define GL_CREATE_PROTECTED_BIT_ANGLE                                       0x00000800
#define GL_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_ANGLE               0x00001000
#define GL_CREATE_CORNER_SAMPLED_BIT_ANGLE                                  0x00002000
#define GL_CREATE_SUBSAMPLED_BIT_ANGLE                                      0x00004000
#define GL_POLYGON_MODE_ANGLE                                               0x0B40
#define GL_COLOR_LOGIC_OP_ANGLE                                             0x0BF2
#define GL_MAX_CLIP_DISTANCES_ANGLE                                         0x0D32
#define GL_CLEAR_ANGLE                                                      0x1500
#define GL_LOGIC_OP_CLEAR_ANGLE                                             0x1500
#define GL_LOGIC_OP_AND_ANGLE                                               0x1501
#define GL_LOGIC_OP_AND_REVERSE_ANGLE                                       0x1502
#define GL_LOGIC_OP_COPY_ANGLE                                              0x1503
#define GL_LOGIC_OP_AND_INVERTED_ANGLE                                      0x1504
#define GL_LOGIC_OP_NOOP_ANGLE                                              0x1505
#define GL_LOGIC_OP_XOR_ANGLE                                               0x1506
#define GL_LOGIC_OP_OR_ANGLE                                                0x1507
#define GL_LOGIC_OP_NOR_ANGLE                                               0x1508
#define GL_LOGIC_OP_EQUIV_ANGLE                                             0x1509
#define GL_LOGIC_OP_INVERT_ANGLE                                            0x150A
#define GL_LOGIC_OP_OR_REVERSE_ANGLE                                        0x150B
#define GL_LOGIC_OP_COPY_INVERTED_ANGLE                                     0x150C
#define GL_LOGIC_OP_OR_INVERTED_ANGLE                                       0x150D
#define GL_LOGIC_OP_NAND_ANGLE                                              0x150E
#define GL_LOGIC_OP_SET_ANGLE                                               0x150F
#define GL_STENCIL_INDEX_ANGLE                                              0x1901
#define GL_LINE_ANGLE                                                       0x1B01
#define GL_FILL_ANGLE                                                       0x1B02
#define GL_POLYGON_OFFSET_LINE_ANGLE                                        0x2A02
#define GL_CLIP_DISTANCE0_ANGLE                                             0x3000
#define GL_CLIP_DISTANCE1_ANGLE                                             0x3001
#define GL_CLIP_DISTANCE2_ANGLE                                             0x3002
#define GL_CLIP_DISTANCE3_ANGLE                                             0x3003
#define GL_CLIP_DISTANCE4_ANGLE                                             0x3004
#define GL_CLIP_DISTANCE5_ANGLE                                             0x3005
#define GL_CLIP_DISTANCE6_ANGLE                                             0x3006
#define GL_CLIP_DISTANCE7_ANGLE                                             0x3007
#define GL_MAX_CULL_DISTANCES_ANGLE                                         0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_ANGLE                       0x82FA
#define GL_FIRST_VERTEX_CONVENTION_ANGLE                                    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_ANGLE                                     0x8E4E
#define GL_PROVOKING_VERTEX_ANGLE                                           0x8E4F
#define GL_DEPTH_STENCIL_TEXTURE_MODE_ANGLE                                 0x90EA
#define GL_ROBUST_RESOURCE_INITIALIZATION_ANGLE                             0x93A7
#define GL_HANDLE_TYPE_ZIRCON_VMO_ANGLE                                     0x93AE
#define GL_HANDLE_TYPE_ZIRCON_EVENT_ANGLE                                   0x93AF
#define GL_RESOURCE_INITIALIZED_ANGLE                                       0x969F
#define GL_MAX_PIXEL_LOCAL_STORAGE_PLANES_ANGLE                             0x96E0
#define GL_MAX_COLOR_ATTACHMENTS_WITH_ACTIVE_PIXEL_LOCAL_STORAGE_ANGLE      0x96E1
#define GL_MAX_COMBINED_DRAW_BUFFERS_AND_PIXEL_LOCAL_STORAGE_PLANES_ANGLE   0x96E2
#define GL_PIXEL_LOCAL_STORAGE_ACTIVE_PLANES_ANGLE                          0x96E3
#define GL_LOAD_OP_ZERO_ANGLE                                               0x96E4
#define GL_LOAD_OP_CLEAR_ANGLE                                              0x96E5
#define GL_LOAD_OP_LOAD_ANGLE                                               0x96E6
#define GL_STORE_OP_STORE_ANGLE                                             0x96E7
#define GL_PIXEL_LOCAL_FORMAT_ANGLE                                         0x96E8
#define GL_PIXEL_LOCAL_TEXTURE_NAME_ANGLE                                   0x96E9
#define GL_PIXEL_LOCAL_TEXTURE_LEVEL_ANGLE                                  0x96EA
#define GL_PIXEL_LOCAL_TEXTURE_LAYER_ANGLE                                  0x96EB
#define GL_PIXEL_LOCAL_CLEAR_VALUE_FLOAT_ANGLE                              0x96EC
#define GL_PIXEL_LOCAL_CLEAR_VALUE_INT_ANGLE                                0x96ED
#define GL_PIXEL_LOCAL_CLEAR_VALUE_UNSIGNED_INT_ANGLE                       0x96EE
#define GL_RENDERABILITY_VALIDATION_ANGLE                                   0x9EA0

typedef void (GLAPIENTRY *PFNGLACQUIRETEXTURESANGLEPROC)(GLuint numTextures, const GLuint * textures, const GLenum * layouts);
typedef void (GLAPIENTRY *PFNGLBEGINPIXELLOCALSTORAGEANGLEPROC)(GLsizei n, const GLenum * loadops);
typedef void (GLAPIENTRY *PFNGLBINDUNIFORMLOCATIONCHROMIUMPROC)(GLuint program, GLint location, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDCOPYTEXTURECHROMIUMPROC)(GLuint sourceId, GLuint destId);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXIMAGE2DROBUSTANGLEPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, GLsizei dataSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXIMAGE3DROBUSTANGLEPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, GLsizei dataSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXSUBIMAGE2DROBUSTANGLEPROC)(GLenum target, GLint level, GLsizei xoffset, GLsizei yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, GLsizei dataSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXSUBIMAGE3DROBUSTANGLEPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, GLsizei dataSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOPYSUBTEXTURE3DANGLEPROC)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLint z, GLint width, GLint height, GLint depth, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);
typedef void (GLAPIENTRY *PFNGLCOPYSUBTEXTURECHROMIUMPROC)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint xoffset, GLint yoffset, GLint x, GLint y, GLint width, GLint height, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);
typedef void (GLAPIENTRY *PFNGLCOPYTEXTURE3DANGLEPROC)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint internalFormat, GLenum destType, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);
typedef void (GLAPIENTRY *PFNGLCOPYTEXTURECHROMIUMPROC)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint internalFormat, GLenum destType, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);
typedef void (GLAPIENTRY *PFNGLCOVERAGEMODULATIONCHROMIUMPROC)(GLenum components);
typedef void (GLAPIENTRY *PFNGLDISABLEEXTENSIONANGLEPROC)(const GLchar * name);
typedef void (GLAPIENTRY *PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEANGLEPROC)(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount, GLuint baseInstance);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEANGLEPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instanceCount, GLint baseVertex, GLuint baseInstance);
typedef void (GLAPIENTRY *PFNGLENDPIXELLOCALSTORAGEANGLEPROC)(GLsizei n, const GLenum * storeops);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERMEMORYLESSPIXELLOCALSTORAGEANGLEPROC)(GLint plane, GLenum internalformat);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERPIXELLOCALCLEARVALUEFVANGLEPROC)(GLint plane, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERPIXELLOCALCLEARVALUEIVANGLEPROC)(GLint plane, const GLint * value);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERPIXELLOCALCLEARVALUEUIVANGLEPROC)(GLint plane, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERPIXELLOCALSTORAGEINTERRUPTANGLEPROC)(void);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERPIXELLOCALSTORAGERESTOREANGLEPROC)(void);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERTEXTUREPIXELLOCALSTORAGEANGLEPROC)(GLint plane, GLuint backingtexture, GLint level, GLint layer);
typedef void (GLAPIENTRY *PFNGLGETACTIVEUNIFORMBLOCKIVROBUSTANGLEPROC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETBOOLEANI_VROBUSTANGLEPROC)(GLenum target, GLuint index, GLsizei bufSize, GLsizei * length, GLboolean * data);
typedef void (GLAPIENTRY *PFNGLGETBOOLEANVROBUSTANGLEPROC)(GLenum pname, GLsizei bufSize, GLsizei * length, GLboolean * params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPARAMETERI64VROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint64 * params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPOINTERVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, void ** params);
typedef void (GLAPIENTRY *PFNGLGETCOMPRESSEDTEXIMAGEANGLEPROC)(GLenum target, GLint level, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETFLOATVROBUSTANGLEPROC)(GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLenum attachment, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGEPARAMETERFVANGLEPROC)(GLint plane, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGEPARAMETERFVROBUSTANGLEPROC)(GLint plane, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGEPARAMETERIVANGLEPROC)(GLint plane, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGEPARAMETERIVROBUSTANGLEPROC)(GLint plane, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETINTEGER64I_VROBUSTANGLEPROC)(GLenum target, GLuint index, GLsizei bufSize, GLsizei * length, GLint64 * data);
typedef void (GLAPIENTRY *PFNGLGETINTEGER64VROBUSTANGLEPROC)(GLenum pname, GLsizei bufSize, GLsizei * length, GLint64 * data);
typedef void (GLAPIENTRY *PFNGLGETINTEGERI_VROBUSTANGLEPROC)(GLenum target, GLuint index, GLsizei bufSize, GLsizei * length, GLint * data);
typedef void (GLAPIENTRY *PFNGLGETINTEGERVROBUSTANGLEPROC)(GLenum pname, GLsizei bufSize, GLsizei * length, GLint * data);
typedef void (GLAPIENTRY *PFNGLGETINTERNALFORMATIVROBUSTANGLEPROC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETMULTISAMPLEFVANGLEPROC)(GLenum pname, GLuint index, GLfloat * val);
typedef void (GLAPIENTRY *PFNGLGETMULTISAMPLEFVROBUSTANGLEPROC)(GLenum pname, GLuint index, GLsizei bufSize, GLsizei * length, GLfloat * val);
typedef void (GLAPIENTRY *PFNGLGETPOINTERVROBUSTANGLEROBUSTANGLEPROC)(GLenum pname, GLsizei bufSize, GLsizei * length, void ** params);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMINTERFACEIVROBUSTANGLEPROC)(GLuint program, GLenum programInterface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMIVROBUSTANGLEPROC)(GLuint program, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTI64VROBUSTANGLEPROC)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLint64 * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTIVROBUSTANGLEPROC)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTUI64VROBUSTANGLEPROC)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint64 * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTUIVROBUSTANGLEPROC)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETRENDERBUFFERIMAGEANGLEPROC)(GLenum target, GLenum format, GLenum type, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETRENDERBUFFERPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERIIVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERIUIVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERFVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERIVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETSHADERIVROBUSTANGLEPROC)(GLuint shader, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXIMAGEANGLEPROC)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETTEXLEVELPARAMETERFVANGLEPROC)(GLenum target, GLint level, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXLEVELPARAMETERFVROBUSTANGLEPROC)(GLenum target, GLint level, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXLEVELPARAMETERIVANGLEPROC)(GLenum target, GLint level, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXLEVELPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLint level, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERIIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERIUIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERFVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMFVROBUSTANGLEPROC)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMIVROBUSTANGLEPROC)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMUIVROBUSTANGLEPROC)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBIIVROBUSTANGLEPROC)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBIUIVROBUSTANGLEPROC)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBPOINTERVROBUSTANGLEPROC)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, void ** pointer);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBFVROBUSTANGLEPROC)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBIVROBUSTANGLEPROC)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMFVROBUSTANGLEPROC)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMIVROBUSTANGLEPROC)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMUIVROBUSTANGLEPROC)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLuint * params);
typedef void (GLAPIENTRY *PFNGLIMPORTMEMORYZIRCONHANDLEANGLEPROC)(GLuint memory, GLuint64 size, GLenum handleType, GLuint handle);
typedef void (GLAPIENTRY *PFNGLIMPORTSEMAPHOREZIRCONHANDLEANGLEPROC)(GLuint semaphore, GLenum handleType, GLuint handle);
typedef void (GLAPIENTRY *PFNGLINVALIDATETEXTUREANGLEPROC)(GLenum target);
typedef void (GLAPIENTRY *PFNGLLOGICOPANGLEPROC)(GLenum opcode);
typedef void (GLAPIENTRY *PFNGLLOSECONTEXTCHROMIUMPROC)(GLenum current, GLenum other);
typedef void (GLAPIENTRY *PFNGLMATRIXLOADIDENTITYCHROMIUMPROC)(GLenum matrixMode);
typedef void (GLAPIENTRY *PFNGLMATRIXLOADFCHROMIUMPROC)(GLenum matrixMode, const GLfloat * matrix);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWARRAYSANGLEPROC)(GLenum mode, const GLint * firsts, const GLsizei * counts, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWARRAYSINSTANCEDANGLEPROC)(GLenum mode, const GLint * firsts, const GLsizei * counts, const GLsizei * instanceCounts, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWARRAYSINSTANCEDBASEINSTANCEANGLEPROC)(GLenum mode, const GLint * firsts, const GLsizei * counts, const GLsizei * instanceCounts, const GLuint * baseInstances, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSANGLEPROC)(GLenum mode, const GLsizei * counts, GLenum type, const void *const* indices, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSINSTANCEDANGLEPROC)(GLenum mode, const GLsizei * counts, GLenum type, const void *const* indices, const GLsizei* instanceCounts, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEANGLEPROC)(GLenum mode, const GLsizei * counts, GLenum type, const void *const* indices, const GLsizei * instanceCounts, const GLint * baseVertices, const GLuint * baseInstances, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLPIXELLOCALSTORAGEBARRIERANGLEPROC)(void);
typedef void (GLAPIENTRY *PFNGLPOLYGONMODEANGLEPROC)(GLenum face, GLenum mode);
typedef void (GLAPIENTRY *PFNGLPROVOKINGVERTEXANGLEPROC)(GLenum provokeMode);
typedef void (GLAPIENTRY *PFNGLREADPIXELSROBUSTANGLEPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLsizei * length, GLsizei * columns, GLsizei * rows, void * pixels);
typedef void (GLAPIENTRY *PFNGLREADNPIXELSROBUSTANGLEPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLsizei * length, GLsizei * columns, GLsizei * rows, void * data);
typedef void (GLAPIENTRY *PFNGLRELEASETEXTURESANGLEPROC)(GLuint numTextures, const GLuint * textures, GLenum * layouts);
typedef void (GLAPIENTRY *PFNGLREQUESTEXTENSIONANGLEPROC)(const GLchar * name);
typedef void (GLAPIENTRY *PFNGLSAMPLEMASKIANGLEPROC)(GLuint maskNumber, GLbitfield mask);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIIVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, const GLint * param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIUIVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, const GLuint * param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERFVROBUSTANGLEPROC)(GLuint sampler, GLenum pname, GLsizei bufSize, const GLfloat * param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIVROBUSTANGLEPROC)(GLuint sampler, GLuint pname, GLsizei bufSize, const GLint * param);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE2DEXTERNALANGLEPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE2DROBUSTANGLEPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE3DROBUSTANGLEPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIUIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, const GLuint * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERFVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIVROBUSTANGLEPROC)(GLenum target, GLenum pname, GLsizei bufSize, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGE2DMULTISAMPLEANGLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGEMEMFLAGS2DANGLEPROC)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGEMEMFLAGS2DMULTISAMPLEANGLEPROC)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGEMEMFLAGS3DANGLEPROC)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGEMEMFLAGS3DMULTISAMPLEANGLEPROC)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);
typedef void (GLAPIENTRY *PFNGLTEXSUBIMAGE2DROBUSTANGLEPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXSUBIMAGE3DROBUSTANGLEPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glAcquireTexturesANGLE)(GLuint numTextures, const GLuint * textures, const GLenum * layouts);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBeginPixelLocalStorageANGLE)(GLsizei n, const GLenum * loadops);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindUniformLocationCHROMIUM)(GLuint program, GLint location, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedCopyTextureCHROMIUM)(GLuint sourceId, GLuint destId);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexImage2DRobustANGLE)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, GLsizei dataSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexImage3DRobustANGLE)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, GLsizei dataSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexSubImage2DRobustANGLE)(GLenum target, GLint level, GLsizei xoffset, GLsizei yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, GLsizei dataSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexSubImage3DRobustANGLE)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, GLsizei dataSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopySubTexture3DANGLE)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLint z, GLint width, GLint height, GLint depth, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopySubTextureCHROMIUM)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint xoffset, GLint yoffset, GLint x, GLint y, GLint width, GLint height, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTexture3DANGLE)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint internalFormat, GLenum destType, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTextureCHROMIUM)(GLuint sourceId, GLint sourceLevel, GLenum destTarget, GLuint destId, GLint destLevel, GLint internalFormat, GLenum destType, GLboolean unpackFlipY, GLboolean unpackPremultiplyAlpha, GLboolean unpackUnmultiplyAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCoverageModulationCHROMIUM)(GLenum components);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDisableExtensionANGLE)(const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawArraysInstancedBaseInstanceANGLE)(GLenum mode, GLint first, GLsizei count, GLsizei instanceCount, GLuint baseInstance);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstancedBaseVertexBaseInstanceANGLE)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instanceCount, GLint baseVertex, GLuint baseInstance);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEndPixelLocalStorageANGLE)(GLsizei n, const GLenum * storeops);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferMemorylessPixelLocalStorageANGLE)(GLint plane, GLenum internalformat);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferPixelLocalClearValuefvANGLE)(GLint plane, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferPixelLocalClearValueivANGLE)(GLint plane, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferPixelLocalClearValueuivANGLE)(GLint plane, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferPixelLocalStorageInterruptANGLE)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferPixelLocalStorageRestoreANGLE)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferTexturePixelLocalStorageANGLE)(GLint plane, GLuint backingtexture, GLint level, GLint layer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveUniformBlockivRobustANGLE)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBooleani_vRobustANGLE)(GLenum target, GLuint index, GLsizei bufSize, GLsizei * length, GLboolean * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBooleanvRobustANGLE)(GLenum pname, GLsizei bufSize, GLsizei * length, GLboolean * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferParameteri64vRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferParameterivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferPointervRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetCompressedTexImageANGLE)(GLenum target, GLint level, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFloatvRobustANGLE)(GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferAttachmentParameterivRobustANGLE)(GLenum target, GLenum attachment, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferParameterivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferPixelLocalStorageParameterfvANGLE)(GLint plane, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferPixelLocalStorageParameterfvRobustANGLE)(GLint plane, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferPixelLocalStorageParameterivANGLE)(GLint plane, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferPixelLocalStorageParameterivRobustANGLE)(GLint plane, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInteger64i_vRobustANGLE)(GLenum target, GLuint index, GLsizei bufSize, GLsizei * length, GLint64 * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInteger64vRobustANGLE)(GLenum pname, GLsizei bufSize, GLsizei * length, GLint64 * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetIntegeri_vRobustANGLE)(GLenum target, GLuint index, GLsizei bufSize, GLsizei * length, GLint * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetIntegervRobustANGLE)(GLenum pname, GLsizei bufSize, GLsizei * length, GLint * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInternalformativRobustANGLE)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMultisamplefvANGLE)(GLenum pname, GLuint index, GLfloat * val);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMultisamplefvRobustANGLE)(GLenum pname, GLuint index, GLsizei bufSize, GLsizei * length, GLfloat * val);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPointervRobustANGLERobustANGLE)(GLenum pname, GLsizei bufSize, GLsizei * length, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramInterfaceivRobustANGLE)(GLuint program, GLenum programInterface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramivRobustANGLE)(GLuint program, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjecti64vRobustANGLE)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjectivRobustANGLE)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjectui64vRobustANGLE)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjectuivRobustANGLE)(GLuint id, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetRenderbufferImageANGLE)(GLenum target, GLenum format, GLenum type, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetRenderbufferParameterivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterIivRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterIuivRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterfvRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterivRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetShaderivRobustANGLE)(GLuint shader, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexImageANGLE)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexLevelParameterfvANGLE)(GLenum target, GLint level, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexLevelParameterfvRobustANGLE)(GLenum target, GLint level, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexLevelParameterivANGLE)(GLenum target, GLint level, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexLevelParameterivRobustANGLE)(GLenum target, GLint level, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterIivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterIuivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterfvRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformfvRobustANGLE)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformivRobustANGLE)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformuivRobustANGLE)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribIivRobustANGLE)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribIuivRobustANGLE)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribPointervRobustANGLE)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, void ** pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribfvRobustANGLE)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribivRobustANGLE)(GLuint index, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformfvRobustANGLE)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformivRobustANGLE)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformuivRobustANGLE)(GLuint program, GLint location, GLsizei bufSize, GLsizei * length, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glImportMemoryZirconHandleANGLE)(GLuint memory, GLuint64 size, GLenum handleType, GLuint handle);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glImportSemaphoreZirconHandleANGLE)(GLuint semaphore, GLenum handleType, GLuint handle);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateTextureANGLE)(GLenum target);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLogicOpANGLE)(GLenum opcode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoseContextCHROMIUM)(GLenum current, GLenum other);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMatrixLoadIdentityCHROMIUM)(GLenum matrixMode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMatrixLoadfCHROMIUM)(GLenum matrixMode, const GLfloat * matrix);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawArraysANGLE)(GLenum mode, const GLint * firsts, const GLsizei * counts, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawArraysInstancedANGLE)(GLenum mode, const GLint * firsts, const GLsizei * counts, const GLsizei * instanceCounts, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawArraysInstancedBaseInstanceANGLE)(GLenum mode, const GLint * firsts, const GLsizei * counts, const GLsizei * instanceCounts, const GLuint * baseInstances, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsANGLE)(GLenum mode, const GLsizei * counts, GLenum type, const void *const* indices, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsInstancedANGLE)(GLenum mode, const GLsizei * counts, GLenum type, const void *const* indices, const GLsizei* instanceCounts, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsInstancedBaseVertexBaseInstanceANGLE)(GLenum mode, const GLsizei * counts, GLenum type, const void *const* indices, const GLsizei * instanceCounts, const GLint * baseVertices, const GLuint * baseInstances, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelLocalStorageBarrierANGLE)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPolygonModeANGLE)(GLenum face, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProvokingVertexANGLE)(GLenum provokeMode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReadPixelsRobustANGLE)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLsizei * length, GLsizei * columns, GLsizei * rows, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReadnPixelsRobustANGLE)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLsizei * length, GLsizei * columns, GLsizei * rows, void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReleaseTexturesANGLE)(GLuint numTextures, const GLuint * textures, GLenum * layouts);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRequestExtensionANGLE)(const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSampleMaskiANGLE)(GLuint maskNumber, GLbitfield mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterIivRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, const GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterIuivRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, const GLuint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterfvRobustANGLE)(GLuint sampler, GLenum pname, GLsizei bufSize, const GLfloat * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterivRobustANGLE)(GLuint sampler, GLuint pname, GLsizei bufSize, const GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage2DExternalANGLE)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage2DRobustANGLE)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage3DRobustANGLE)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterIivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterIuivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, const GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterfvRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterivRobustANGLE)(GLenum target, GLenum pname, GLsizei bufSize, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorage2DMultisampleANGLE)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorageMemFlags2DANGLE)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorageMemFlags2DMultisampleANGLE)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorageMemFlags3DANGLE)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorageMemFlags3DMultisampleANGLE)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset, GLbitfield createFlags, GLbitfield usageFlags, const void * imageCreateInfoPNext);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexSubImage2DRobustANGLE)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexSubImage3DRobustANGLE)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);

#define glAcquireTexturesANGLE epoxy_glAcquireTexturesANGLE
#define glBeginPixelLocalStorageANGLE epoxy_glBeginPixelLocalStorageANGLE
#define glBindUniformLocationCHROMIUM epoxy_glBindUniformLocationCHROMIUM
#define glCompressedCopyTextureCHROMIUM epoxy_glCompressedCopyTextureCHROMIUM
#define glCompressedTexImage2DRobustANGLE epoxy_glCompressedTexImage2DRobustANGLE
#define glCompressedTexImage3DRobustANGLE epoxy_glCompressedTexImage3DRobustANGLE
#define glCompressedTexSubImage2DRobustANGLE epoxy_glCompressedTexSubImage2DRobustANGLE
#define glCompressedTexSubImage3DRobustANGLE epoxy_glCompressedTexSubImage3DRobustANGLE
#define glCopySubTexture3DANGLE epoxy_glCopySubTexture3DANGLE
#define glCopySubTextureCHROMIUM epoxy_glCopySubTextureCHROMIUM
#define glCopyTexture3DANGLE epoxy_glCopyTexture3DANGLE
#define glCopyTextureCHROMIUM epoxy_glCopyTextureCHROMIUM
#define glCoverageModulationCHROMIUM epoxy_glCoverageModulationCHROMIUM
#define glDisableExtensionANGLE epoxy_glDisableExtensionANGLE
#define glDrawArraysInstancedBaseInstanceANGLE epoxy_glDrawArraysInstancedBaseInstanceANGLE
#define glDrawElementsInstancedBaseVertexBaseInstanceANGLE epoxy_glDrawElementsInstancedBaseVertexBaseInstanceANGLE
#define glEndPixelLocalStorageANGLE epoxy_glEndPixelLocalStorageANGLE
#define glFramebufferMemorylessPixelLocalStorageANGLE epoxy_glFramebufferMemorylessPixelLocalStorageANGLE
#define glFramebufferPixelLocalClearValuefvANGLE epoxy_glFramebufferPixelLocalClearValuefvANGLE
#define glFramebufferPixelLocalClearValueivANGLE epoxy_glFramebufferPixelLocalClearValueivANGLE
#define glFramebufferPixelLocalClearValueuivANGLE epoxy_glFramebufferPixelLocalClearValueuivANGLE
#define glFramebufferPixelLocalStorageInterruptANGLE epoxy_glFramebufferPixelLocalStorageInterruptANGLE
#define glFramebufferPixelLocalStorageRestoreANGLE epoxy_glFramebufferPixelLocalStorageRestoreANGLE
#define glFramebufferTexturePixelLocalStorageANGLE epoxy_glFramebufferTexturePixelLocalStorageANGLE
#define glGetActiveUniformBlockivRobustANGLE epoxy_glGetActiveUniformBlockivRobustANGLE
#define glGetBooleani_vRobustANGLE epoxy_glGetBooleani_vRobustANGLE
#define glGetBooleanvRobustANGLE epoxy_glGetBooleanvRobustANGLE
#define glGetBufferParameteri64vRobustANGLE epoxy_glGetBufferParameteri64vRobustANGLE
#define glGetBufferParameterivRobustANGLE epoxy_glGetBufferParameterivRobustANGLE
#define glGetBufferPointervRobustANGLE epoxy_glGetBufferPointervRobustANGLE
#define glGetCompressedTexImageANGLE epoxy_glGetCompressedTexImageANGLE
#define glGetFloatvRobustANGLE epoxy_glGetFloatvRobustANGLE
#define glGetFramebufferAttachmentParameterivRobustANGLE epoxy_glGetFramebufferAttachmentParameterivRobustANGLE
#define glGetFramebufferParameterivRobustANGLE epoxy_glGetFramebufferParameterivRobustANGLE
#define glGetFramebufferPixelLocalStorageParameterfvANGLE epoxy_glGetFramebufferPixelLocalStorageParameterfvANGLE
#define glGetFramebufferPixelLocalStorageParameterfvRobustANGLE epoxy_glGetFramebufferPixelLocalStorageParameterfvRobustANGLE
#define glGetFramebufferPixelLocalStorageParameterivANGLE epoxy_glGetFramebufferPixelLocalStorageParameterivANGLE
#define glGetFramebufferPixelLocalStorageParameterivRobustANGLE epoxy_glGetFramebufferPixelLocalStorageParameterivRobustANGLE
#define glGetInteger64i_vRobustANGLE epoxy_glGetInteger64i_vRobustANGLE
#define glGetInteger64vRobustANGLE epoxy_glGetInteger64vRobustANGLE
#define glGetIntegeri_vRobustANGLE epoxy_glGetIntegeri_vRobustANGLE
#define glGetIntegervRobustANGLE epoxy_glGetIntegervRobustANGLE
#define glGetInternalformativRobustANGLE epoxy_glGetInternalformativRobustANGLE
#define glGetMultisamplefvANGLE epoxy_glGetMultisamplefvANGLE
#define glGetMultisamplefvRobustANGLE epoxy_glGetMultisamplefvRobustANGLE
#define glGetPointervRobustANGLERobustANGLE epoxy_glGetPointervRobustANGLERobustANGLE
#define glGetProgramInterfaceivRobustANGLE epoxy_glGetProgramInterfaceivRobustANGLE
#define glGetProgramivRobustANGLE epoxy_glGetProgramivRobustANGLE
#define glGetQueryObjecti64vRobustANGLE epoxy_glGetQueryObjecti64vRobustANGLE
#define glGetQueryObjectivRobustANGLE epoxy_glGetQueryObjectivRobustANGLE
#define glGetQueryObjectui64vRobustANGLE epoxy_glGetQueryObjectui64vRobustANGLE
#define glGetQueryObjectuivRobustANGLE epoxy_glGetQueryObjectuivRobustANGLE
#define glGetQueryivRobustANGLE epoxy_glGetQueryivRobustANGLE
#define glGetRenderbufferImageANGLE epoxy_glGetRenderbufferImageANGLE
#define glGetRenderbufferParameterivRobustANGLE epoxy_glGetRenderbufferParameterivRobustANGLE
#define glGetSamplerParameterIivRobustANGLE epoxy_glGetSamplerParameterIivRobustANGLE
#define glGetSamplerParameterIuivRobustANGLE epoxy_glGetSamplerParameterIuivRobustANGLE
#define glGetSamplerParameterfvRobustANGLE epoxy_glGetSamplerParameterfvRobustANGLE
#define glGetSamplerParameterivRobustANGLE epoxy_glGetSamplerParameterivRobustANGLE
#define glGetShaderivRobustANGLE epoxy_glGetShaderivRobustANGLE
#define glGetTexImageANGLE epoxy_glGetTexImageANGLE
#define glGetTexLevelParameterfvANGLE epoxy_glGetTexLevelParameterfvANGLE
#define glGetTexLevelParameterfvRobustANGLE epoxy_glGetTexLevelParameterfvRobustANGLE
#define glGetTexLevelParameterivANGLE epoxy_glGetTexLevelParameterivANGLE
#define glGetTexLevelParameterivRobustANGLE epoxy_glGetTexLevelParameterivRobustANGLE
#define glGetTexParameterIivRobustANGLE epoxy_glGetTexParameterIivRobustANGLE
#define glGetTexParameterIuivRobustANGLE epoxy_glGetTexParameterIuivRobustANGLE
#define glGetTexParameterfvRobustANGLE epoxy_glGetTexParameterfvRobustANGLE
#define glGetTexParameterivRobustANGLE epoxy_glGetTexParameterivRobustANGLE
#define glGetUniformfvRobustANGLE epoxy_glGetUniformfvRobustANGLE
#define glGetUniformivRobustANGLE epoxy_glGetUniformivRobustANGLE
#define glGetUniformuivRobustANGLE epoxy_glGetUniformuivRobustANGLE
#define glGetVertexAttribIivRobustANGLE epoxy_glGetVertexAttribIivRobustANGLE
#define glGetVertexAttribIuivRobustANGLE epoxy_glGetVertexAttribIuivRobustANGLE
#define glGetVertexAttribPointervRobustANGLE epoxy_glGetVertexAttribPointervRobustANGLE
#define glGetVertexAttribfvRobustANGLE epoxy_glGetVertexAttribfvRobustANGLE
#define glGetVertexAttribivRobustANGLE epoxy_glGetVertexAttribivRobustANGLE
#define glGetnUniformfvRobustANGLE epoxy_glGetnUniformfvRobustANGLE
#define glGetnUniformivRobustANGLE epoxy_glGetnUniformivRobustANGLE
#define glGetnUniformuivRobustANGLE epoxy_glGetnUniformuivRobustANGLE
#define glImportMemoryZirconHandleANGLE epoxy_glImportMemoryZirconHandleANGLE
#define glImportSemaphoreZirconHandleANGLE epoxy_glImportSemaphoreZirconHandleANGLE
#define glInvalidateTextureANGLE epoxy_glInvalidateTextureANGLE
#define glLogicOpANGLE epoxy_glLogicOpANGLE
#define glLoseContextCHROMIUM epoxy_glLoseContextCHROMIUM
#define glMatrixLoadIdentityCHROMIUM epoxy_glMatrixLoadIdentityCHROMIUM
#define glMatrixLoadfCHROMIUM epoxy_glMatrixLoadfCHROMIUM
#define glMultiDrawArraysANGLE epoxy_glMultiDrawArraysANGLE
#define glMultiDrawArraysInstancedANGLE epoxy_glMultiDrawArraysInstancedANGLE
#define glMultiDrawArraysInstancedBaseInstanceANGLE epoxy_glMultiDrawArraysInstancedBaseInstanceANGLE
#define glMultiDrawElementsANGLE epoxy_glMultiDrawElementsANGLE
#define glMultiDrawElementsInstancedANGLE epoxy_glMultiDrawElementsInstancedANGLE
#define glMultiDrawElementsInstancedBaseVertexBaseInstanceANGLE epoxy_glMultiDrawElementsInstancedBaseVertexBaseInstanceANGLE
#define glPixelLocalStorageBarrierANGLE epoxy_glPixelLocalStorageBarrierANGLE
#define glPolygonModeANGLE epoxy_glPolygonModeANGLE
#define glProvokingVertexANGLE epoxy_glProvokingVertexANGLE
#define glReadPixelsRobustANGLE epoxy_glReadPixelsRobustANGLE
#define glReadnPixelsRobustANGLE epoxy_glReadnPixelsRobustANGLE
#define glReleaseTexturesANGLE epoxy_glReleaseTexturesANGLE
#define glRequestExtensionANGLE epoxy_glRequestExtensionANGLE
#define glSampleMaskiANGLE epoxy_glSampleMaskiANGLE
#define glSamplerParameterIivRobustANGLE epoxy_glSamplerParameterIivRobustANGLE
#define glSamplerParameterIuivRobustANGLE epoxy_glSamplerParameterIuivRobustANGLE
#define glSamplerParameterfvRobustANGLE epoxy_glSamplerParameterfvRobustANGLE
#define glSamplerParameterivRobustANGLE epoxy_glSamplerParameterivRobustANGLE
#define glTexImage2DExternalANGLE epoxy_glTexImage2DExternalANGLE
#define glTexImage2DRobustANGLE epoxy_glTexImage2DRobustANGLE
#define glTexImage3DRobustANGLE epoxy_glTexImage3DRobustANGLE
#define glTexParameterIivRobustANGLE epoxy_glTexParameterIivRobustANGLE
#define glTexParameterIuivRobustANGLE epoxy_glTexParameterIuivRobustANGLE
#define glTexParameterfvRobustANGLE epoxy_glTexParameterfvRobustANGLE
#define glTexParameterivRobustANGLE epoxy_glTexParameterivRobustANGLE
#define glTexStorage2DMultisampleANGLE epoxy_glTexStorage2DMultisampleANGLE
#define glTexStorageMemFlags2DANGLE epoxy_glTexStorageMemFlags2DANGLE
#define glTexStorageMemFlags2DMultisampleANGLE epoxy_glTexStorageMemFlags2DMultisampleANGLE
#define glTexStorageMemFlags3DANGLE epoxy_glTexStorageMemFlags3DANGLE
#define glTexStorageMemFlags3DMultisampleANGLE epoxy_glTexStorageMemFlags3DMultisampleANGLE
#define glTexSubImage2DRobustANGLE epoxy_glTexSubImage2DRobustANGLE
#define glTexSubImage3DRobustANGLE epoxy_glTexSubImage3DRobustANGLE
