// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file DSRGraphPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _DSRGRAPH_PUBSUBTYPES_H_
#define _DSRGRAPH_PUBSUBTYPES_H_

#include <fastrtps/config.h>
#include <fastrtps/TopicDataType.h>

#include "IDLGraph.h"

#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error Generated DSRGraph is not compatible with current installed Fast-RTPS. Please, regenerate it with fastrtpsgen.
#endif

using namespace IDL;


/*!
 * @brief This class represents the TopicDataType of the type Attrib defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class AttribPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Attrib type;

    eProsima_user_DllExport AttribPubSubType();

    eProsima_user_DllExport virtual ~AttribPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type PairInt defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class PairIntPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef PairInt type;

    eProsima_user_DllExport PairIntPubSubType();

    eProsima_user_DllExport virtual ~PairIntPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type DotContext defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class DotContextPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef DotContext type;

    eProsima_user_DllExport DotContextPubSubType();

    eProsima_user_DllExport virtual ~DotContextPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type DotKernelAttr defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class DotKernelAttrPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef DotKernelAttr type;

    eProsima_user_DllExport DotKernelAttrPubSubType();

    eProsima_user_DllExport virtual ~DotKernelAttrPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MvregEdgeAttr defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class MvregEdgeAttrPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef MvregEdgeAttr type;

    eProsima_user_DllExport MvregEdgeAttrPubSubType();

    eProsima_user_DllExport virtual ~MvregEdgeAttrPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Edge defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class EdgePubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef IDLEdge type;

    eProsima_user_DllExport EdgePubSubType();

    eProsima_user_DllExport virtual ~EdgePubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type EdgeKey defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class EdgeKeyPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef EdgeKey type;

    eProsima_user_DllExport EdgeKeyPubSubType();

    eProsima_user_DllExport virtual ~EdgeKeyPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MvregNodeAttr defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class MvregNodeAttrPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef MvregNodeAttr type;

    eProsima_user_DllExport MvregNodeAttrPubSubType();

    eProsima_user_DllExport virtual ~MvregNodeAttrPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type DotKernelEdge defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class DotKernelEdgePubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef DotKernelEdge type;

    eProsima_user_DllExport DotKernelEdgePubSubType();

    eProsima_user_DllExport virtual ~DotKernelEdgePubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MvregEdge defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class MvregEdgePubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef MvregEdge type;

    eProsima_user_DllExport MvregEdgePubSubType();

    eProsima_user_DllExport virtual ~MvregEdgePubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Node defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class NodePubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef IDLNode type;

    eProsima_user_DllExport NodePubSubType();

    eProsima_user_DllExport virtual ~NodePubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type GraphRequest defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class GraphRequestPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef GraphRequest type;

    eProsima_user_DllExport GraphRequestPubSubType();

    eProsima_user_DllExport virtual ~GraphRequestPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type DotKernel defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class DotKernelPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef DotKernel type;

    eProsima_user_DllExport DotKernelPubSubType();

    eProsima_user_DllExport virtual ~DotKernelPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Mvreg defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class MvregPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Mvreg type;

    eProsima_user_DllExport MvregPubSubType();

    eProsima_user_DllExport virtual ~MvregPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type OrMap defined by the user in the IDL file.
 * @ingroup DSRGRAPH
 */
class OrMapPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef OrMap type;

    eProsima_user_DllExport OrMapPubSubType();

    eProsima_user_DllExport virtual ~OrMapPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};

#endif // _DSRGRAPH_PUBSUBTYPES_H_