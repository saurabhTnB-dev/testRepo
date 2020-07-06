/* Generated from Opc.Ua.Types.bsd with script D:/Saurabh/Professional/Practice/OPCUA/open62541/tools/generate_datatypes.py
 * on host DESKTOP-O2GJHJB by user saura at 2020-07-04 09:42:12 */

#ifndef TYPES_GENERATED_H_
#define TYPES_GENERATED_H_

#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>

#endif

_UA_BEGIN_DECLS


/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_COUNT 375
extern UA_EXPORT const UA_DataType UA_TYPES[UA_TYPES_COUNT];

/**
 * Boolean
 * ^^^^^^^
 */
#define UA_TYPES_BOOLEAN 0

/**
 * SByte
 * ^^^^^
 */
#define UA_TYPES_SBYTE 1

/**
 * Byte
 * ^^^^
 */
#define UA_TYPES_BYTE 2

/**
 * Int16
 * ^^^^^
 */
#define UA_TYPES_INT16 3

/**
 * UInt16
 * ^^^^^^
 */
#define UA_TYPES_UINT16 4

/**
 * Int32
 * ^^^^^
 */
#define UA_TYPES_INT32 5

/**
 * UInt32
 * ^^^^^^
 */
#define UA_TYPES_UINT32 6

/**
 * Int64
 * ^^^^^
 */
#define UA_TYPES_INT64 7

/**
 * UInt64
 * ^^^^^^
 */
#define UA_TYPES_UINT64 8

/**
 * Float
 * ^^^^^
 */
#define UA_TYPES_FLOAT 9

/**
 * Double
 * ^^^^^^
 */
#define UA_TYPES_DOUBLE 10

/**
 * String
 * ^^^^^^
 */
#define UA_TYPES_STRING 11

/**
 * DateTime
 * ^^^^^^^^
 */
#define UA_TYPES_DATETIME 12

/**
 * Guid
 * ^^^^
 */
#define UA_TYPES_GUID 13

/**
 * ByteString
 * ^^^^^^^^^^
 */
#define UA_TYPES_BYTESTRING 14

/**
 * XmlElement
 * ^^^^^^^^^^
 */
#define UA_TYPES_XMLELEMENT 15

/**
 * NodeId
 * ^^^^^^
 */
#define UA_TYPES_NODEID 16

/**
 * ExpandedNodeId
 * ^^^^^^^^^^^^^^
 */
#define UA_TYPES_EXPANDEDNODEID 17

/**
 * StatusCode
 * ^^^^^^^^^^
 */
#define UA_TYPES_STATUSCODE 18

/**
 * QualifiedName
 * ^^^^^^^^^^^^^
 */
#define UA_TYPES_QUALIFIEDNAME 19

/**
 * LocalizedText
 * ^^^^^^^^^^^^^
 */
#define UA_TYPES_LOCALIZEDTEXT 20

/**
 * ExtensionObject
 * ^^^^^^^^^^^^^^^
 */
#define UA_TYPES_EXTENSIONOBJECT 21

/**
 * DataValue
 * ^^^^^^^^^
 */
#define UA_TYPES_DATAVALUE 22

/**
 * Variant
 * ^^^^^^^
 */
#define UA_TYPES_VARIANT 23

/**
 * DiagnosticInfo
 * ^^^^^^^^^^^^^^
 */
#define UA_TYPES_DIAGNOSTICINFO 24

/**
 * NamingRuleType
 * ^^^^^^^^^^^^^^
 */
typedef enum {
    UA_NAMINGRULETYPE_MANDATORY = 1,
    UA_NAMINGRULETYPE_OPTIONAL = 2,
    UA_NAMINGRULETYPE_CONSTRAINT = 3,
    __UA_NAMINGRULETYPE_FORCE32BIT = 0x7fffffff
} UA_NamingRuleType;
UA_STATIC_ASSERT(sizeof(UA_NamingRuleType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NAMINGRULETYPE 25

/**
 * ImageBMP
 * ^^^^^^^^
 */
typedef UA_ByteString UA_ImageBMP;

#define UA_TYPES_IMAGEBMP 26

/**
 * ImageGIF
 * ^^^^^^^^
 */
typedef UA_ByteString UA_ImageGIF;

#define UA_TYPES_IMAGEGIF 27

/**
 * ImageJPG
 * ^^^^^^^^
 */
typedef UA_ByteString UA_ImageJPG;

#define UA_TYPES_IMAGEJPG 28

/**
 * ImagePNG
 * ^^^^^^^^
 */
typedef UA_ByteString UA_ImagePNG;

#define UA_TYPES_IMAGEPNG 29

/**
 * AudioDataType
 * ^^^^^^^^^^^^^
 */
typedef UA_ByteString UA_AudioDataType;

#define UA_TYPES_AUDIODATATYPE 30

/**
 * BitFieldMaskDataType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt64 UA_BitFieldMaskDataType;

#define UA_TYPES_BITFIELDMASKDATATYPE 31

/**
 * KeyValuePair
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_QualifiedName key;
    UA_Variant value;
} UA_KeyValuePair;

#define UA_TYPES_KEYVALUEPAIR 32

/**
 * RationalNumber
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int32 numerator;
    UA_UInt32 denominator;
} UA_RationalNumber;

#define UA_TYPES_RATIONALNUMBER 33

/**
 * Vector
 * ^^^^^^
 */
typedef void * UA_Vector;

#define UA_TYPES_VECTOR 34

/**
 * ThreeDVector
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Double y;
    UA_Double z;
} UA_ThreeDVector;

#define UA_TYPES_THREEDVECTOR 35

/**
 * CartesianCoordinates
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_CartesianCoordinates;

#define UA_TYPES_CARTESIANCOORDINATES 36

/**
 * ThreeDCartesianCoordinates
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Double y;
    UA_Double z;
} UA_ThreeDCartesianCoordinates;

#define UA_TYPES_THREEDCARTESIANCOORDINATES 37

/**
 * Orientation
 * ^^^^^^^^^^^
 */
typedef void * UA_Orientation;

#define UA_TYPES_ORIENTATION 38

/**
 * ThreeDOrientation
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Double a;
    UA_Double b;
    UA_Double c;
} UA_ThreeDOrientation;

#define UA_TYPES_THREEDORIENTATION 39

/**
 * Frame
 * ^^^^^
 */
typedef void * UA_Frame;

#define UA_TYPES_FRAME 40

/**
 * ThreeDFrame
 * ^^^^^^^^^^^
 */
typedef struct {
    UA_ThreeDCartesianCoordinates cartesianCoordinates;
    UA_ThreeDOrientation orientation;
} UA_ThreeDFrame;

#define UA_TYPES_THREEDFRAME 41

/**
 * OpenFileMode
 * ^^^^^^^^^^^^
 */
typedef enum {
    UA_OPENFILEMODE_READ = 1,
    UA_OPENFILEMODE_WRITE = 2,
    UA_OPENFILEMODE_ERASEEXISTING = 4,
    UA_OPENFILEMODE_APPEND = 8,
    __UA_OPENFILEMODE_FORCE32BIT = 0x7fffffff
} UA_OpenFileMode;
UA_STATIC_ASSERT(sizeof(UA_OpenFileMode) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_OPENFILEMODE 42

/**
 * IdentityCriteriaType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_IDENTITYCRITERIATYPE_USERNAME = 1,
    UA_IDENTITYCRITERIATYPE_THUMBPRINT = 2,
    UA_IDENTITYCRITERIATYPE_ROLE = 3,
    UA_IDENTITYCRITERIATYPE_GROUPID = 4,
    UA_IDENTITYCRITERIATYPE_ANONYMOUS = 5,
    UA_IDENTITYCRITERIATYPE_AUTHENTICATEDUSER = 6,
    __UA_IDENTITYCRITERIATYPE_FORCE32BIT = 0x7fffffff
} UA_IdentityCriteriaType;
UA_STATIC_ASSERT(sizeof(UA_IdentityCriteriaType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_IDENTITYCRITERIATYPE 43

/**
 * IdentityMappingRuleType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_IdentityCriteriaType criteriaType;
    UA_String criteria;
} UA_IdentityMappingRuleType;

#define UA_TYPES_IDENTITYMAPPINGRULETYPE 44

/**
 * CurrencyUnitType
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int16 numericCode;
    UA_SByte exponent;
    UA_String alphabeticCode;
    UA_LocalizedText currency;
} UA_CurrencyUnitType;

#define UA_TYPES_CURRENCYUNITTYPE 45

/**
 * TrustListMasks
 * ^^^^^^^^^^^^^^
 */
typedef enum {
    UA_TRUSTLISTMASKS_NONE = 0,
    UA_TRUSTLISTMASKS_TRUSTEDCERTIFICATES = 1,
    UA_TRUSTLISTMASKS_TRUSTEDCRLS = 2,
    UA_TRUSTLISTMASKS_ISSUERCERTIFICATES = 4,
    UA_TRUSTLISTMASKS_ISSUERCRLS = 8,
    UA_TRUSTLISTMASKS_ALL = 15,
    __UA_TRUSTLISTMASKS_FORCE32BIT = 0x7fffffff
} UA_TrustListMasks;
UA_STATIC_ASSERT(sizeof(UA_TrustListMasks) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_TRUSTLISTMASKS 46

/**
 * TrustListDataType
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedLists;
    size_t trustedCertificatesSize;
    UA_ByteString *trustedCertificates;
    size_t trustedCrlsSize;
    UA_ByteString *trustedCrls;
    size_t issuerCertificatesSize;
    UA_ByteString *issuerCertificates;
    size_t issuerCrlsSize;
    UA_ByteString *issuerCrls;
} UA_TrustListDataType;

#define UA_TYPES_TRUSTLISTDATATYPE 47

/**
 * DecimalDataType
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int16 scale;
    UA_ByteString value;
} UA_DecimalDataType;

#define UA_TYPES_DECIMALDATATYPE 48

/**
 * DataTypeDescription
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId dataTypeId;
    UA_QualifiedName name;
} UA_DataTypeDescription;

#define UA_TYPES_DATATYPEDESCRIPTION 49

/**
 * SimpleTypeDescription
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId dataTypeId;
    UA_QualifiedName name;
    UA_NodeId baseDataType;
    UA_Byte builtInType;
} UA_SimpleTypeDescription;

#define UA_TYPES_SIMPLETYPEDESCRIPTION 50

/**
 * PubSubState
 * ^^^^^^^^^^^
 */
typedef enum {
    UA_PUBSUBSTATE_DISABLED = 0,
    UA_PUBSUBSTATE_PAUSED = 1,
    UA_PUBSUBSTATE_OPERATIONAL = 2,
    UA_PUBSUBSTATE_ERROR = 3,
    __UA_PUBSUBSTATE_FORCE32BIT = 0x7fffffff
} UA_PubSubState;
UA_STATIC_ASSERT(sizeof(UA_PubSubState) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_PUBSUBSTATE 51

/**
 * DataSetFieldFlags
 * ^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt16 UA_DataSetFieldFlags;

#define UA_DATASETFIELDFLAGS_NONE 0
#define UA_DATASETFIELDFLAGS_PROMOTEDFIELD 1

#define UA_TYPES_DATASETFIELDFLAGS 52

/**
 * ConfigurationVersionDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 majorVersion;
    UA_UInt32 minorVersion;
} UA_ConfigurationVersionDataType;

#define UA_TYPES_CONFIGURATIONVERSIONDATATYPE 53

/**
 * PublishedDataSetSourceDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_PublishedDataSetSourceDataType;

#define UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE 54

/**
 * PublishedVariableDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId publishedVariable;
    UA_UInt32 attributeId;
    UA_Double samplingIntervalHint;
    UA_UInt32 deadbandType;
    UA_Double deadbandValue;
    UA_String indexRange;
    UA_Variant substituteValue;
    size_t metaDataPropertiesSize;
    UA_QualifiedName *metaDataProperties;
} UA_PublishedVariableDataType;

#define UA_TYPES_PUBLISHEDVARIABLEDATATYPE 55

/**
 * PublishedDataItemsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t publishedDataSize;
    UA_PublishedVariableDataType *publishedData;
} UA_PublishedDataItemsDataType;

#define UA_TYPES_PUBLISHEDDATAITEMSDATATYPE 56

/**
 * DataSetFieldContentMask
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_DataSetFieldContentMask;

#define UA_DATASETFIELDCONTENTMASK_NONE 0
#define UA_DATASETFIELDCONTENTMASK_STATUSCODE 1
#define UA_DATASETFIELDCONTENTMASK_SOURCETIMESTAMP 2
#define UA_DATASETFIELDCONTENTMASK_SERVERTIMESTAMP 4
#define UA_DATASETFIELDCONTENTMASK_SOURCEPICOSECONDS 8
#define UA_DATASETFIELDCONTENTMASK_SERVERPICOSECONDS 16
#define UA_DATASETFIELDCONTENTMASK_RAWDATA 32

#define UA_TYPES_DATASETFIELDCONTENTMASK 57

/**
 * DataSetWriterDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_Boolean enabled;
    UA_UInt16 dataSetWriterId;
    UA_DataSetFieldContentMask dataSetFieldContentMask;
    UA_UInt32 keyFrameCount;
    UA_String dataSetName;
    size_t dataSetWriterPropertiesSize;
    UA_KeyValuePair *dataSetWriterProperties;
    UA_ExtensionObject transportSettings;
    UA_ExtensionObject messageSettings;
} UA_DataSetWriterDataType;

#define UA_TYPES_DATASETWRITERDATATYPE 58

/**
 * DataSetWriterTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_DataSetWriterTransportDataType;

#define UA_TYPES_DATASETWRITERTRANSPORTDATATYPE 59

/**
 * DataSetWriterMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_DataSetWriterMessageDataType;

#define UA_TYPES_DATASETWRITERMESSAGEDATATYPE 60

/**
 * WriterGroupTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_WriterGroupTransportDataType;

#define UA_TYPES_WRITERGROUPTRANSPORTDATATYPE 61

/**
 * WriterGroupMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_WriterGroupMessageDataType;

#define UA_TYPES_WRITERGROUPMESSAGEDATATYPE 62

/**
 * ConnectionTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_ConnectionTransportDataType;

#define UA_TYPES_CONNECTIONTRANSPORTDATATYPE 63

/**
 * NetworkAddressDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String networkInterface;
} UA_NetworkAddressDataType;

#define UA_TYPES_NETWORKADDRESSDATATYPE 64

/**
 * NetworkAddressUrlDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String networkInterface;
    UA_String url;
} UA_NetworkAddressUrlDataType;

#define UA_TYPES_NETWORKADDRESSURLDATATYPE 65

/**
 * ReaderGroupTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_ReaderGroupTransportDataType;

#define UA_TYPES_READERGROUPTRANSPORTDATATYPE 66

/**
 * ReaderGroupMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_ReaderGroupMessageDataType;

#define UA_TYPES_READERGROUPMESSAGEDATATYPE 67

/**
 * DataSetReaderTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_DataSetReaderTransportDataType;

#define UA_TYPES_DATASETREADERTRANSPORTDATATYPE 68

/**
 * DataSetReaderMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_DataSetReaderMessageDataType;

#define UA_TYPES_DATASETREADERMESSAGEDATATYPE 69

/**
 * SubscribedDataSetDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_SubscribedDataSetDataType;

#define UA_TYPES_SUBSCRIBEDDATASETDATATYPE 70

/**
 * OverrideValueHandling
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_OVERRIDEVALUEHANDLING_DISABLED = 0,
    UA_OVERRIDEVALUEHANDLING_LASTUSABLEVALUE = 1,
    UA_OVERRIDEVALUEHANDLING_OVERRIDEVALUE = 2,
    __UA_OVERRIDEVALUEHANDLING_FORCE32BIT = 0x7fffffff
} UA_OverrideValueHandling;
UA_STATIC_ASSERT(sizeof(UA_OverrideValueHandling) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_OVERRIDEVALUEHANDLING 71

/**
 * DataSetOrderingType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_DATASETORDERINGTYPE_UNDEFINED = 0,
    UA_DATASETORDERINGTYPE_ASCENDINGWRITERID = 1,
    UA_DATASETORDERINGTYPE_ASCENDINGWRITERIDSINGLE = 2,
    __UA_DATASETORDERINGTYPE_FORCE32BIT = 0x7fffffff
} UA_DataSetOrderingType;
UA_STATIC_ASSERT(sizeof(UA_DataSetOrderingType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_DATASETORDERINGTYPE 72

/**
 * UadpNetworkMessageContentMask
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_UadpNetworkMessageContentMask;

#define UA_UADPNETWORKMESSAGECONTENTMASK_NONE 0
#define UA_UADPNETWORKMESSAGECONTENTMASK_PUBLISHERID 1
#define UA_UADPNETWORKMESSAGECONTENTMASK_GROUPHEADER 2
#define UA_UADPNETWORKMESSAGECONTENTMASK_WRITERGROUPID 4
#define UA_UADPNETWORKMESSAGECONTENTMASK_GROUPVERSION 8
#define UA_UADPNETWORKMESSAGECONTENTMASK_NETWORKMESSAGENUMBER 16
#define UA_UADPNETWORKMESSAGECONTENTMASK_SEQUENCENUMBER 32
#define UA_UADPNETWORKMESSAGECONTENTMASK_PAYLOADHEADER 64
#define UA_UADPNETWORKMESSAGECONTENTMASK_TIMESTAMP 128
#define UA_UADPNETWORKMESSAGECONTENTMASK_PICOSECONDS 256
#define UA_UADPNETWORKMESSAGECONTENTMASK_DATASETCLASSID 512
#define UA_UADPNETWORKMESSAGECONTENTMASK_PROMOTEDFIELDS 1024

#define UA_TYPES_UADPNETWORKMESSAGECONTENTMASK 73

/**
 * UadpWriterGroupMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 groupVersion;
    UA_DataSetOrderingType dataSetOrdering;
    UA_UadpNetworkMessageContentMask networkMessageContentMask;
    UA_Double samplingOffset;
    size_t publishingOffsetSize;
    UA_Double *publishingOffset;
} UA_UadpWriterGroupMessageDataType;

#define UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE 74

/**
 * UadpDataSetMessageContentMask
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_UadpDataSetMessageContentMask;

#define UA_UADPDATASETMESSAGECONTENTMASK_NONE 0
#define UA_UADPDATASETMESSAGECONTENTMASK_TIMESTAMP 1
#define UA_UADPDATASETMESSAGECONTENTMASK_PICOSECONDS 2
#define UA_UADPDATASETMESSAGECONTENTMASK_STATUS 4
#define UA_UADPDATASETMESSAGECONTENTMASK_MAJORVERSION 8
#define UA_UADPDATASETMESSAGECONTENTMASK_MINORVERSION 16
#define UA_UADPDATASETMESSAGECONTENTMASK_SEQUENCENUMBER 32

#define UA_TYPES_UADPDATASETMESSAGECONTENTMASK 75

/**
 * UadpDataSetWriterMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UadpDataSetMessageContentMask dataSetMessageContentMask;
    UA_UInt16 configuredSize;
    UA_UInt16 networkMessageNumber;
    UA_UInt16 dataSetOffset;
} UA_UadpDataSetWriterMessageDataType;

#define UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE 76

/**
 * UadpDataSetReaderMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 groupVersion;
    UA_UInt16 networkMessageNumber;
    UA_UInt16 dataSetOffset;
    UA_Guid dataSetClassId;
    UA_UadpNetworkMessageContentMask networkMessageContentMask;
    UA_UadpDataSetMessageContentMask dataSetMessageContentMask;
    UA_Double publishingInterval;
    UA_Double receiveOffset;
    UA_Double processingOffset;
} UA_UadpDataSetReaderMessageDataType;

#define UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE 77

/**
 * JsonNetworkMessageContentMask
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_JsonNetworkMessageContentMask;

#define UA_JSONNETWORKMESSAGECONTENTMASK_NONE 0
#define UA_JSONNETWORKMESSAGECONTENTMASK_NETWORKMESSAGEHEADER 1
#define UA_JSONNETWORKMESSAGECONTENTMASK_DATASETMESSAGEHEADER 2
#define UA_JSONNETWORKMESSAGECONTENTMASK_SINGLEDATASETMESSAGE 4
#define UA_JSONNETWORKMESSAGECONTENTMASK_PUBLISHERID 8
#define UA_JSONNETWORKMESSAGECONTENTMASK_DATASETCLASSID 16
#define UA_JSONNETWORKMESSAGECONTENTMASK_REPLYTO 32

#define UA_TYPES_JSONNETWORKMESSAGECONTENTMASK 78

/**
 * JsonWriterGroupMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_JsonNetworkMessageContentMask networkMessageContentMask;
} UA_JsonWriterGroupMessageDataType;

#define UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE 79

/**
 * JsonDataSetMessageContentMask
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_JsonDataSetMessageContentMask;

#define UA_JSONDATASETMESSAGECONTENTMASK_NONE 0
#define UA_JSONDATASETMESSAGECONTENTMASK_DATASETWRITERID 1
#define UA_JSONDATASETMESSAGECONTENTMASK_METADATAVERSION 2
#define UA_JSONDATASETMESSAGECONTENTMASK_SEQUENCENUMBER 4
#define UA_JSONDATASETMESSAGECONTENTMASK_TIMESTAMP 8
#define UA_JSONDATASETMESSAGECONTENTMASK_STATUS 16

#define UA_TYPES_JSONDATASETMESSAGECONTENTMASK 80

/**
 * JsonDataSetWriterMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_JsonDataSetMessageContentMask dataSetMessageContentMask;
} UA_JsonDataSetWriterMessageDataType;

#define UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE 81

/**
 * JsonDataSetReaderMessageDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_JsonNetworkMessageContentMask networkMessageContentMask;
    UA_JsonDataSetMessageContentMask dataSetMessageContentMask;
} UA_JsonDataSetReaderMessageDataType;

#define UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE 82

/**
 * DatagramConnectionTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ExtensionObject discoveryAddress;
} UA_DatagramConnectionTransportDataType;

#define UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE 83

/**
 * DatagramWriterGroupTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Byte messageRepeatCount;
    UA_Double messageRepeatDelay;
} UA_DatagramWriterGroupTransportDataType;

#define UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE 84

/**
 * BrokerConnectionTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String resourceUri;
    UA_String authenticationProfileUri;
} UA_BrokerConnectionTransportDataType;

#define UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE 85

/**
 * BrokerTransportQualityOfService
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_BROKERTRANSPORTQUALITYOFSERVICE_NOTSPECIFIED = 0,
    UA_BROKERTRANSPORTQUALITYOFSERVICE_BESTEFFORT = 1,
    UA_BROKERTRANSPORTQUALITYOFSERVICE_ATLEASTONCE = 2,
    UA_BROKERTRANSPORTQUALITYOFSERVICE_ATMOSTONCE = 3,
    UA_BROKERTRANSPORTQUALITYOFSERVICE_EXACTLYONCE = 4,
    __UA_BROKERTRANSPORTQUALITYOFSERVICE_FORCE32BIT = 0x7fffffff
} UA_BrokerTransportQualityOfService;
UA_STATIC_ASSERT(sizeof(UA_BrokerTransportQualityOfService) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE 86

/**
 * BrokerWriterGroupTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String queueName;
    UA_String resourceUri;
    UA_String authenticationProfileUri;
    UA_BrokerTransportQualityOfService requestedDeliveryGuarantee;
} UA_BrokerWriterGroupTransportDataType;

#define UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE 87

/**
 * BrokerDataSetWriterTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String queueName;
    UA_String resourceUri;
    UA_String authenticationProfileUri;
    UA_BrokerTransportQualityOfService requestedDeliveryGuarantee;
    UA_String metaDataQueueName;
    UA_Double metaDataUpdateTime;
} UA_BrokerDataSetWriterTransportDataType;

#define UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE 88

/**
 * BrokerDataSetReaderTransportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String queueName;
    UA_String resourceUri;
    UA_String authenticationProfileUri;
    UA_BrokerTransportQualityOfService requestedDeliveryGuarantee;
    UA_String metaDataQueueName;
} UA_BrokerDataSetReaderTransportDataType;

#define UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE 89

/**
 * DiagnosticsLevel
 * ^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_DIAGNOSTICSLEVEL_BASIC = 0,
    UA_DIAGNOSTICSLEVEL_ADVANCED = 1,
    UA_DIAGNOSTICSLEVEL_INFO = 2,
    UA_DIAGNOSTICSLEVEL_LOG = 3,
    UA_DIAGNOSTICSLEVEL_DEBUG = 4,
    __UA_DIAGNOSTICSLEVEL_FORCE32BIT = 0x7fffffff
} UA_DiagnosticsLevel;
UA_STATIC_ASSERT(sizeof(UA_DiagnosticsLevel) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_DIAGNOSTICSLEVEL 90

/**
 * PubSubDiagnosticsCounterClassification
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION_INFORMATION = 0,
    UA_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION_ERROR = 1,
    __UA_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION_FORCE32BIT = 0x7fffffff
} UA_PubSubDiagnosticsCounterClassification;
UA_STATIC_ASSERT(sizeof(UA_PubSubDiagnosticsCounterClassification) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION 91

/**
 * IdType
 * ^^^^^^
 */
typedef enum {
    UA_IDTYPE_NUMERIC = 0,
    UA_IDTYPE_STRING = 1,
    UA_IDTYPE_GUID = 2,
    UA_IDTYPE_OPAQUE = 3,
    __UA_IDTYPE_FORCE32BIT = 0x7fffffff
} UA_IdType;
UA_STATIC_ASSERT(sizeof(UA_IdType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_IDTYPE 92

/**
 * NodeClass
 * ^^^^^^^^^
 */
typedef enum {
    UA_NODECLASS_UNSPECIFIED = 0,
    UA_NODECLASS_OBJECT = 1,
    UA_NODECLASS_VARIABLE = 2,
    UA_NODECLASS_METHOD = 4,
    UA_NODECLASS_OBJECTTYPE = 8,
    UA_NODECLASS_VARIABLETYPE = 16,
    UA_NODECLASS_REFERENCETYPE = 32,
    UA_NODECLASS_DATATYPE = 64,
    UA_NODECLASS_VIEW = 128,
    __UA_NODECLASS_FORCE32BIT = 0x7fffffff
} UA_NodeClass;
UA_STATIC_ASSERT(sizeof(UA_NodeClass) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NODECLASS 93

/**
 * PermissionType
 * ^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_PermissionType;

#define UA_PERMISSIONTYPE_NONE 0
#define UA_PERMISSIONTYPE_BROWSE 1
#define UA_PERMISSIONTYPE_READROLEPERMISSIONS 2
#define UA_PERMISSIONTYPE_WRITEATTRIBUTE 4
#define UA_PERMISSIONTYPE_WRITEROLEPERMISSIONS 8
#define UA_PERMISSIONTYPE_WRITEHISTORIZING 16
#define UA_PERMISSIONTYPE_READ 32
#define UA_PERMISSIONTYPE_WRITE 64
#define UA_PERMISSIONTYPE_READHISTORY 128
#define UA_PERMISSIONTYPE_INSERTHISTORY 256
#define UA_PERMISSIONTYPE_MODIFYHISTORY 512
#define UA_PERMISSIONTYPE_DELETEHISTORY 1024
#define UA_PERMISSIONTYPE_RECEIVEEVENTS 2048
#define UA_PERMISSIONTYPE_CALL 4096
#define UA_PERMISSIONTYPE_ADDREFERENCE 8192
#define UA_PERMISSIONTYPE_REMOVEREFERENCE 16384
#define UA_PERMISSIONTYPE_DELETENODE 32768
#define UA_PERMISSIONTYPE_ADDNODE 65536

#define UA_TYPES_PERMISSIONTYPE 94

/**
 * AccessLevelType
 * ^^^^^^^^^^^^^^^
 */
typedef UA_Byte UA_AccessLevelType;

#define UA_ACCESSLEVELTYPE_NONE 0
#define UA_ACCESSLEVELTYPE_CURRENTREAD 1
#define UA_ACCESSLEVELTYPE_CURRENTWRITE 2
#define UA_ACCESSLEVELTYPE_HISTORYREAD 4
#define UA_ACCESSLEVELTYPE_HISTORYWRITE 8
#define UA_ACCESSLEVELTYPE_SEMANTICCHANGE 16
#define UA_ACCESSLEVELTYPE_STATUSWRITE 32
#define UA_ACCESSLEVELTYPE_TIMESTAMPWRITE 64

#define UA_TYPES_ACCESSLEVELTYPE 95

/**
 * AccessLevelExType
 * ^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_AccessLevelExType;

#define UA_ACCESSLEVELEXTYPE_NONE 0
#define UA_ACCESSLEVELEXTYPE_CURRENTREAD 1
#define UA_ACCESSLEVELEXTYPE_CURRENTWRITE 2
#define UA_ACCESSLEVELEXTYPE_HISTORYREAD 4
#define UA_ACCESSLEVELEXTYPE_HISTORYWRITE 8
#define UA_ACCESSLEVELEXTYPE_SEMANTICCHANGE 16
#define UA_ACCESSLEVELEXTYPE_STATUSWRITE 32
#define UA_ACCESSLEVELEXTYPE_TIMESTAMPWRITE 64
#define UA_ACCESSLEVELEXTYPE_NONATOMICREAD 256
#define UA_ACCESSLEVELEXTYPE_NONATOMICWRITE 512
#define UA_ACCESSLEVELEXTYPE_WRITEFULLARRAYONLY 1024

#define UA_TYPES_ACCESSLEVELEXTYPE 96

/**
 * EventNotifierType
 * ^^^^^^^^^^^^^^^^^
 */
typedef UA_Byte UA_EventNotifierType;

#define UA_EVENTNOTIFIERTYPE_NONE 0
#define UA_EVENTNOTIFIERTYPE_SUBSCRIBETOEVENTS 1
#define UA_EVENTNOTIFIERTYPE_HISTORYREAD 4
#define UA_EVENTNOTIFIERTYPE_HISTORYWRITE 8

#define UA_TYPES_EVENTNOTIFIERTYPE 97

/**
 * AccessRestrictionType
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_AccessRestrictionType;

#define UA_ACCESSRESTRICTIONTYPE_NONE 0
#define UA_ACCESSRESTRICTIONTYPE_SIGNINGREQUIRED 1
#define UA_ACCESSRESTRICTIONTYPE_ENCRYPTIONREQUIRED 2
#define UA_ACCESSRESTRICTIONTYPE_SESSIONREQUIRED 4

#define UA_TYPES_ACCESSRESTRICTIONTYPE 98

/**
 * RolePermissionType
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId roleId;
    UA_PermissionType permissions;
} UA_RolePermissionType;

#define UA_TYPES_ROLEPERMISSIONTYPE 99

/**
 * StructureType
 * ^^^^^^^^^^^^^
 */
typedef enum {
    UA_STRUCTURETYPE_STRUCTURE = 0,
    UA_STRUCTURETYPE_STRUCTUREWITHOPTIONALFIELDS = 1,
    UA_STRUCTURETYPE_UNION = 2,
    __UA_STRUCTURETYPE_FORCE32BIT = 0x7fffffff
} UA_StructureType;
UA_STATIC_ASSERT(sizeof(UA_StructureType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_STRUCTURETYPE 100

/**
 * StructureField
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_LocalizedText description;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_UInt32 maxStringLength;
    UA_Boolean isOptional;
} UA_StructureField;

#define UA_TYPES_STRUCTUREFIELD 101

/**
 * StructureDefinition
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId defaultEncodingId;
    UA_NodeId baseDataType;
    UA_StructureType structureType;
    size_t fieldsSize;
    UA_StructureField *fields;
} UA_StructureDefinition;

#define UA_TYPES_STRUCTUREDEFINITION 102

/**
 * ReferenceNode
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId referenceTypeId;
    UA_Boolean isInverse;
    UA_ExpandedNodeId targetId;
} UA_ReferenceNode;

#define UA_TYPES_REFERENCENODE 103

/**
 * Argument
 * ^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_LocalizedText description;
} UA_Argument;

#define UA_TYPES_ARGUMENT 104

/**
 * EnumValueType
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int64 value;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
} UA_EnumValueType;

#define UA_TYPES_ENUMVALUETYPE 105

/**
 * EnumField
 * ^^^^^^^^^
 */
typedef struct {
    UA_Int64 value;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_String name;
} UA_EnumField;

#define UA_TYPES_ENUMFIELD 106

/**
 * OptionSet
 * ^^^^^^^^^
 */
typedef struct {
    UA_ByteString value;
    UA_ByteString validBits;
} UA_OptionSet;

#define UA_TYPES_OPTIONSET 107

/**
 * Union
 * ^^^^^
 */
typedef void * UA_Union;

#define UA_TYPES_UNION 108

/**
 * NormalizedString
 * ^^^^^^^^^^^^^^^^
 */
typedef UA_String UA_NormalizedString;

#define UA_TYPES_NORMALIZEDSTRING 109

/**
 * DecimalString
 * ^^^^^^^^^^^^^
 */
typedef UA_String UA_DecimalString;

#define UA_TYPES_DECIMALSTRING 110

/**
 * DurationString
 * ^^^^^^^^^^^^^^
 */
typedef UA_String UA_DurationString;

#define UA_TYPES_DURATIONSTRING 111

/**
 * TimeString
 * ^^^^^^^^^^
 */
typedef UA_String UA_TimeString;

#define UA_TYPES_TIMESTRING 112

/**
 * DateString
 * ^^^^^^^^^^
 */
typedef UA_String UA_DateString;

#define UA_TYPES_DATESTRING 113

/**
 * Duration
 * ^^^^^^^^
 */
typedef UA_Double UA_Duration;

#define UA_TYPES_DURATION 114

/**
 * UtcTime
 * ^^^^^^^
 */
typedef UA_DateTime UA_UtcTime;

#define UA_TYPES_UTCTIME 115

/**
 * LocaleId
 * ^^^^^^^^
 */
typedef UA_String UA_LocaleId;

#define UA_TYPES_LOCALEID 116

/**
 * TimeZoneDataType
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int16 offset;
    UA_Boolean daylightSavingInOffset;
} UA_TimeZoneDataType;

#define UA_TYPES_TIMEZONEDATATYPE 117

/**
 * Index
 * ^^^^^
 */
typedef UA_ByteString UA_Index;

#define UA_TYPES_INDEX 118

/**
 * IntegerId
 * ^^^^^^^^^
 */
typedef UA_UInt32 UA_IntegerId;

#define UA_TYPES_INTEGERID 119

/**
 * ApplicationType
 * ^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_APPLICATIONTYPE_SERVER = 0,
    UA_APPLICATIONTYPE_CLIENT = 1,
    UA_APPLICATIONTYPE_CLIENTANDSERVER = 2,
    UA_APPLICATIONTYPE_DISCOVERYSERVER = 3,
    __UA_APPLICATIONTYPE_FORCE32BIT = 0x7fffffff
} UA_ApplicationType;
UA_STATIC_ASSERT(sizeof(UA_ApplicationType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_APPLICATIONTYPE 120

/**
 * ApplicationDescription
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String applicationUri;
    UA_String productUri;
    UA_LocalizedText applicationName;
    UA_ApplicationType applicationType;
    UA_String gatewayServerUri;
    UA_String discoveryProfileUri;
    size_t discoveryUrlsSize;
    UA_String *discoveryUrls;
} UA_ApplicationDescription;

#define UA_TYPES_APPLICATIONDESCRIPTION 121

/**
 * RequestHeader
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId authenticationToken;
    UA_DateTime timestamp;
    UA_UInt32 requestHandle;
    UA_UInt32 returnDiagnostics;
    UA_String auditEntryId;
    UA_UInt32 timeoutHint;
    UA_ExtensionObject additionalHeader;
} UA_RequestHeader;

#define UA_TYPES_REQUESTHEADER 122

/**
 * ResponseHeader
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DateTime timestamp;
    UA_UInt32 requestHandle;
    UA_StatusCode serviceResult;
    UA_DiagnosticInfo serviceDiagnostics;
    size_t stringTableSize;
    UA_String *stringTable;
    UA_ExtensionObject additionalHeader;
} UA_ResponseHeader;

#define UA_TYPES_RESPONSEHEADER 123

/**
 * VersionTime
 * ^^^^^^^^^^^
 */
typedef UA_ByteString UA_VersionTime;

#define UA_TYPES_VERSIONTIME 124

/**
 * ServiceFault
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_ServiceFault;

#define UA_TYPES_SERVICEFAULT 125

/**
 * SessionlessInvokeRequestType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t urisVersionSize;
    UA_UInt32 *urisVersion;
    size_t namespaceUrisSize;
    UA_String *namespaceUris;
    size_t serverUrisSize;
    UA_String *serverUris;
    size_t localeIdsSize;
    UA_String *localeIds;
    UA_UInt32 serviceId;
} UA_SessionlessInvokeRequestType;

#define UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE 126

/**
 * SessionlessInvokeResponseType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t namespaceUrisSize;
    UA_String *namespaceUris;
    size_t serverUrisSize;
    UA_String *serverUris;
    UA_UInt32 serviceId;
} UA_SessionlessInvokeResponseType;

#define UA_TYPES_SESSIONLESSINVOKERESPONSETYPE 127

/**
 * FindServersRequest
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_String endpointUrl;
    size_t localeIdsSize;
    UA_String *localeIds;
    size_t serverUrisSize;
    UA_String *serverUris;
} UA_FindServersRequest;

#define UA_TYPES_FINDSERVERSREQUEST 128

/**
 * FindServersResponse
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t serversSize;
    UA_ApplicationDescription *servers;
} UA_FindServersResponse;

#define UA_TYPES_FINDSERVERSRESPONSE 129

/**
 * ServerOnNetwork
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 recordId;
    UA_String serverName;
    UA_String discoveryUrl;
    size_t serverCapabilitiesSize;
    UA_String *serverCapabilities;
} UA_ServerOnNetwork;

#define UA_TYPES_SERVERONNETWORK 130

/**
 * FindServersOnNetworkRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 startingRecordId;
    UA_UInt32 maxRecordsToReturn;
    size_t serverCapabilityFilterSize;
    UA_String *serverCapabilityFilter;
} UA_FindServersOnNetworkRequest;

#define UA_TYPES_FINDSERVERSONNETWORKREQUEST 131

/**
 * FindServersOnNetworkResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_DateTime lastCounterResetTime;
    size_t serversSize;
    UA_ServerOnNetwork *servers;
} UA_FindServersOnNetworkResponse;

#define UA_TYPES_FINDSERVERSONNETWORKRESPONSE 132

/**
 * ApplicationInstanceCertificate
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_ByteString UA_ApplicationInstanceCertificate;

#define UA_TYPES_APPLICATIONINSTANCECERTIFICATE 133

/**
 * MessageSecurityMode
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MESSAGESECURITYMODE_INVALID = 0,
    UA_MESSAGESECURITYMODE_NONE = 1,
    UA_MESSAGESECURITYMODE_SIGN = 2,
    UA_MESSAGESECURITYMODE_SIGNANDENCRYPT = 3,
    __UA_MESSAGESECURITYMODE_FORCE32BIT = 0x7fffffff
} UA_MessageSecurityMode;
UA_STATIC_ASSERT(sizeof(UA_MessageSecurityMode) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MESSAGESECURITYMODE 134

/**
 * UserTokenType
 * ^^^^^^^^^^^^^
 */
typedef enum {
    UA_USERTOKENTYPE_ANONYMOUS = 0,
    UA_USERTOKENTYPE_USERNAME = 1,
    UA_USERTOKENTYPE_CERTIFICATE = 2,
    UA_USERTOKENTYPE_ISSUEDTOKEN = 3,
    __UA_USERTOKENTYPE_FORCE32BIT = 0x7fffffff
} UA_UserTokenType;
UA_STATIC_ASSERT(sizeof(UA_UserTokenType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_USERTOKENTYPE 135

/**
 * UserTokenPolicy
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String policyId;
    UA_UserTokenType tokenType;
    UA_String issuedTokenType;
    UA_String issuerEndpointUrl;
    UA_String securityPolicyUri;
} UA_UserTokenPolicy;

#define UA_TYPES_USERTOKENPOLICY 136

/**
 * EndpointDescription
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String endpointUrl;
    UA_ApplicationDescription server;
    UA_ByteString serverCertificate;
    UA_MessageSecurityMode securityMode;
    UA_String securityPolicyUri;
    size_t userIdentityTokensSize;
    UA_UserTokenPolicy *userIdentityTokens;
    UA_String transportProfileUri;
    UA_Byte securityLevel;
} UA_EndpointDescription;

#define UA_TYPES_ENDPOINTDESCRIPTION 137

/**
 * GetEndpointsRequest
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_String endpointUrl;
    size_t localeIdsSize;
    UA_String *localeIds;
    size_t profileUrisSize;
    UA_String *profileUris;
} UA_GetEndpointsRequest;

#define UA_TYPES_GETENDPOINTSREQUEST 138

/**
 * GetEndpointsResponse
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t endpointsSize;
    UA_EndpointDescription *endpoints;
} UA_GetEndpointsResponse;

#define UA_TYPES_GETENDPOINTSRESPONSE 139

/**
 * RegisteredServer
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String serverUri;
    UA_String productUri;
    size_t serverNamesSize;
    UA_LocalizedText *serverNames;
    UA_ApplicationType serverType;
    UA_String gatewayServerUri;
    size_t discoveryUrlsSize;
    UA_String *discoveryUrls;
    UA_String semaphoreFilePath;
    UA_Boolean isOnline;
} UA_RegisteredServer;

#define UA_TYPES_REGISTEREDSERVER 140

/**
 * RegisterServerRequest
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_RegisteredServer server;
} UA_RegisterServerRequest;

#define UA_TYPES_REGISTERSERVERREQUEST 141

/**
 * RegisterServerResponse
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_RegisterServerResponse;

#define UA_TYPES_REGISTERSERVERRESPONSE 142

/**
 * DiscoveryConfiguration
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_DiscoveryConfiguration;

#define UA_TYPES_DISCOVERYCONFIGURATION 143

/**
 * MdnsDiscoveryConfiguration
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String mdnsServerName;
    size_t serverCapabilitiesSize;
    UA_String *serverCapabilities;
} UA_MdnsDiscoveryConfiguration;

#define UA_TYPES_MDNSDISCOVERYCONFIGURATION 144

/**
 * RegisterServer2Request
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_RegisteredServer server;
    size_t discoveryConfigurationSize;
    UA_ExtensionObject *discoveryConfiguration;
} UA_RegisterServer2Request;

#define UA_TYPES_REGISTERSERVER2REQUEST 145

/**
 * RegisterServer2Response
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t configurationResultsSize;
    UA_StatusCode *configurationResults;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_RegisterServer2Response;

#define UA_TYPES_REGISTERSERVER2RESPONSE 146

/**
 * SecurityTokenRequestType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_SECURITYTOKENREQUESTTYPE_ISSUE = 0,
    UA_SECURITYTOKENREQUESTTYPE_RENEW = 1,
    __UA_SECURITYTOKENREQUESTTYPE_FORCE32BIT = 0x7fffffff
} UA_SecurityTokenRequestType;
UA_STATIC_ASSERT(sizeof(UA_SecurityTokenRequestType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_SECURITYTOKENREQUESTTYPE 147

/**
 * ChannelSecurityToken
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 channelId;
    UA_UInt32 tokenId;
    UA_DateTime createdAt;
    UA_UInt32 revisedLifetime;
} UA_ChannelSecurityToken;

#define UA_TYPES_CHANNELSECURITYTOKEN 148

/**
 * OpenSecureChannelRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 clientProtocolVersion;
    UA_SecurityTokenRequestType requestType;
    UA_MessageSecurityMode securityMode;
    UA_ByteString clientNonce;
    UA_UInt32 requestedLifetime;
} UA_OpenSecureChannelRequest;

#define UA_TYPES_OPENSECURECHANNELREQUEST 149

/**
 * OpenSecureChannelResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 serverProtocolVersion;
    UA_ChannelSecurityToken securityToken;
    UA_ByteString serverNonce;
} UA_OpenSecureChannelResponse;

#define UA_TYPES_OPENSECURECHANNELRESPONSE 150

/**
 * CloseSecureChannelRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
} UA_CloseSecureChannelRequest;

#define UA_TYPES_CLOSESECURECHANNELREQUEST 151

/**
 * CloseSecureChannelResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_CloseSecureChannelResponse;

#define UA_TYPES_CLOSESECURECHANNELRESPONSE 152

/**
 * SignedSoftwareCertificate
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ByteString certificateData;
    UA_ByteString signature;
} UA_SignedSoftwareCertificate;

#define UA_TYPES_SIGNEDSOFTWARECERTIFICATE 153

/**
 * SessionAuthenticationToken
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_NodeId UA_SessionAuthenticationToken;

#define UA_TYPES_SESSIONAUTHENTICATIONTOKEN 154

/**
 * SignatureData
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_String algorithm;
    UA_ByteString signature;
} UA_SignatureData;

#define UA_TYPES_SIGNATUREDATA 155

/**
 * CreateSessionRequest
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ApplicationDescription clientDescription;
    UA_String serverUri;
    UA_String endpointUrl;
    UA_String sessionName;
    UA_ByteString clientNonce;
    UA_ByteString clientCertificate;
    UA_Double requestedSessionTimeout;
    UA_UInt32 maxResponseMessageSize;
} UA_CreateSessionRequest;

#define UA_TYPES_CREATESESSIONREQUEST 156

/**
 * CreateSessionResponse
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_NodeId sessionId;
    UA_NodeId authenticationToken;
    UA_Double revisedSessionTimeout;
    UA_ByteString serverNonce;
    UA_ByteString serverCertificate;
    size_t serverEndpointsSize;
    UA_EndpointDescription *serverEndpoints;
    size_t serverSoftwareCertificatesSize;
    UA_SignedSoftwareCertificate *serverSoftwareCertificates;
    UA_SignatureData serverSignature;
    UA_UInt32 maxRequestMessageSize;
} UA_CreateSessionResponse;

#define UA_TYPES_CREATESESSIONRESPONSE 157

/**
 * UserIdentityToken
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String policyId;
} UA_UserIdentityToken;

#define UA_TYPES_USERIDENTITYTOKEN 158

/**
 * AnonymousIdentityToken
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String policyId;
} UA_AnonymousIdentityToken;

#define UA_TYPES_ANONYMOUSIDENTITYTOKEN 159

/**
 * UserNameIdentityToken
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String policyId;
    UA_String userName;
    UA_ByteString password;
    UA_String encryptionAlgorithm;
} UA_UserNameIdentityToken;

#define UA_TYPES_USERNAMEIDENTITYTOKEN 160

/**
 * X509IdentityToken
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String policyId;
    UA_ByteString certificateData;
} UA_X509IdentityToken;

#define UA_TYPES_X509IDENTITYTOKEN 161

/**
 * IssuedIdentityToken
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String policyId;
    UA_ByteString tokenData;
    UA_String encryptionAlgorithm;
} UA_IssuedIdentityToken;

#define UA_TYPES_ISSUEDIDENTITYTOKEN 162

/**
 * RsaEncryptedSecret
 * ^^^^^^^^^^^^^^^^^^
 */
typedef UA_ByteString UA_RsaEncryptedSecret;

#define UA_TYPES_RSAENCRYPTEDSECRET 163

/**
 * ActivateSessionRequest
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_SignatureData clientSignature;
    size_t clientSoftwareCertificatesSize;
    UA_SignedSoftwareCertificate *clientSoftwareCertificates;
    size_t localeIdsSize;
    UA_String *localeIds;
    UA_ExtensionObject userIdentityToken;
    UA_SignatureData userTokenSignature;
} UA_ActivateSessionRequest;

#define UA_TYPES_ACTIVATESESSIONREQUEST 164

/**
 * ActivateSessionResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_ByteString serverNonce;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_ActivateSessionResponse;

#define UA_TYPES_ACTIVATESESSIONRESPONSE 165

/**
 * CloseSessionRequest
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean deleteSubscriptions;
} UA_CloseSessionRequest;

#define UA_TYPES_CLOSESESSIONREQUEST 166

/**
 * CloseSessionResponse
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_CloseSessionResponse;

#define UA_TYPES_CLOSESESSIONRESPONSE 167

/**
 * CancelRequest
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 requestHandle;
} UA_CancelRequest;

#define UA_TYPES_CANCELREQUEST 168

/**
 * CancelResponse
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 cancelCount;
} UA_CancelResponse;

#define UA_TYPES_CANCELRESPONSE 169

/**
 * NodeAttributesMask
 * ^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_NODEATTRIBUTESMASK_NONE = 0,
    UA_NODEATTRIBUTESMASK_ACCESSLEVEL = 1,
    UA_NODEATTRIBUTESMASK_ARRAYDIMENSIONS = 2,
    UA_NODEATTRIBUTESMASK_BROWSENAME = 4,
    UA_NODEATTRIBUTESMASK_CONTAINSNOLOOPS = 8,
    UA_NODEATTRIBUTESMASK_DATATYPE = 16,
    UA_NODEATTRIBUTESMASK_DESCRIPTION = 32,
    UA_NODEATTRIBUTESMASK_DISPLAYNAME = 64,
    UA_NODEATTRIBUTESMASK_EVENTNOTIFIER = 128,
    UA_NODEATTRIBUTESMASK_EXECUTABLE = 256,
    UA_NODEATTRIBUTESMASK_HISTORIZING = 512,
    UA_NODEATTRIBUTESMASK_INVERSENAME = 1024,
    UA_NODEATTRIBUTESMASK_ISABSTRACT = 2048,
    UA_NODEATTRIBUTESMASK_MINIMUMSAMPLINGINTERVAL = 4096,
    UA_NODEATTRIBUTESMASK_NODECLASS = 8192,
    UA_NODEATTRIBUTESMASK_NODEID = 16384,
    UA_NODEATTRIBUTESMASK_SYMMETRIC = 32768,
    UA_NODEATTRIBUTESMASK_USERACCESSLEVEL = 65536,
    UA_NODEATTRIBUTESMASK_USEREXECUTABLE = 131072,
    UA_NODEATTRIBUTESMASK_USERWRITEMASK = 262144,
    UA_NODEATTRIBUTESMASK_VALUERANK = 524288,
    UA_NODEATTRIBUTESMASK_WRITEMASK = 1048576,
    UA_NODEATTRIBUTESMASK_VALUE = 2097152,
    UA_NODEATTRIBUTESMASK_DATATYPEDEFINITION = 4194304,
    UA_NODEATTRIBUTESMASK_ROLEPERMISSIONS = 8388608,
    UA_NODEATTRIBUTESMASK_ACCESSRESTRICTIONS = 16777216,
    UA_NODEATTRIBUTESMASK_ALL = 33554431,
    UA_NODEATTRIBUTESMASK_BASENODE = 26501220,
    UA_NODEATTRIBUTESMASK_OBJECT = 26501348,
    UA_NODEATTRIBUTESMASK_OBJECTTYPE = 26503268,
    UA_NODEATTRIBUTESMASK_VARIABLE = 26571383,
    UA_NODEATTRIBUTESMASK_VARIABLETYPE = 28600438,
    UA_NODEATTRIBUTESMASK_METHOD = 26632548,
    UA_NODEATTRIBUTESMASK_REFERENCETYPE = 26537060,
    UA_NODEATTRIBUTESMASK_VIEW = 26501356,
    __UA_NODEATTRIBUTESMASK_FORCE32BIT = 0x7fffffff
} UA_NodeAttributesMask;
UA_STATIC_ASSERT(sizeof(UA_NodeAttributesMask) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NODEATTRIBUTESMASK 170

/**
 * NodeAttributes
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
} UA_NodeAttributes;

#define UA_TYPES_NODEATTRIBUTES 171

/**
 * ObjectAttributes
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Byte eventNotifier;
} UA_ObjectAttributes;

#define UA_TYPES_OBJECTATTRIBUTES 172

/**
 * VariableAttributes
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Variant value;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_Byte accessLevel;
    UA_Byte userAccessLevel;
    UA_Double minimumSamplingInterval;
    UA_Boolean historizing;
} UA_VariableAttributes;

#define UA_TYPES_VARIABLEATTRIBUTES 173

/**
 * MethodAttributes
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean executable;
    UA_Boolean userExecutable;
} UA_MethodAttributes;

#define UA_TYPES_METHODATTRIBUTES 174

/**
 * ObjectTypeAttributes
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean isAbstract;
} UA_ObjectTypeAttributes;

#define UA_TYPES_OBJECTTYPEATTRIBUTES 175

/**
 * VariableTypeAttributes
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Variant value;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_Boolean isAbstract;
} UA_VariableTypeAttributes;

#define UA_TYPES_VARIABLETYPEATTRIBUTES 176

/**
 * ReferenceTypeAttributes
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean isAbstract;
    UA_Boolean symmetric;
    UA_LocalizedText inverseName;
} UA_ReferenceTypeAttributes;

#define UA_TYPES_REFERENCETYPEATTRIBUTES 177

/**
 * DataTypeAttributes
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean isAbstract;
} UA_DataTypeAttributes;

#define UA_TYPES_DATATYPEATTRIBUTES 178

/**
 * ViewAttributes
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean containsNoLoops;
    UA_Byte eventNotifier;
} UA_ViewAttributes;

#define UA_TYPES_VIEWATTRIBUTES 179

/**
 * GenericAttributeValue
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 attributeId;
    UA_Variant value;
} UA_GenericAttributeValue;

#define UA_TYPES_GENERICATTRIBUTEVALUE 180

/**
 * GenericAttributes
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    size_t attributeValuesSize;
    UA_GenericAttributeValue *attributeValues;
} UA_GenericAttributes;

#define UA_TYPES_GENERICATTRIBUTES 181

/**
 * AddNodesItem
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_ExpandedNodeId parentNodeId;
    UA_NodeId referenceTypeId;
    UA_ExpandedNodeId requestedNewNodeId;
    UA_QualifiedName browseName;
    UA_NodeClass nodeClass;
    UA_ExtensionObject nodeAttributes;
    UA_ExpandedNodeId typeDefinition;
} UA_AddNodesItem;

#define UA_TYPES_ADDNODESITEM 182

/**
 * AddNodesResult
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_NodeId addedNodeId;
} UA_AddNodesResult;

#define UA_TYPES_ADDNODESRESULT 183

/**
 * AddNodesRequest
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToAddSize;
    UA_AddNodesItem *nodesToAdd;
} UA_AddNodesRequest;

#define UA_TYPES_ADDNODESREQUEST 184

/**
 * AddNodesResponse
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_AddNodesResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_AddNodesResponse;

#define UA_TYPES_ADDNODESRESPONSE 185

/**
 * AddReferencesItem
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId sourceNodeId;
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    UA_String targetServerUri;
    UA_ExpandedNodeId targetNodeId;
    UA_NodeClass targetNodeClass;
} UA_AddReferencesItem;

#define UA_TYPES_ADDREFERENCESITEM 186

/**
 * AddReferencesRequest
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t referencesToAddSize;
    UA_AddReferencesItem *referencesToAdd;
} UA_AddReferencesRequest;

#define UA_TYPES_ADDREFERENCESREQUEST 187

/**
 * AddReferencesResponse
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_AddReferencesResponse;

#define UA_TYPES_ADDREFERENCESRESPONSE 188

/**
 * DeleteNodesItem
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_Boolean deleteTargetReferences;
} UA_DeleteNodesItem;

#define UA_TYPES_DELETENODESITEM 189

/**
 * DeleteNodesRequest
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToDeleteSize;
    UA_DeleteNodesItem *nodesToDelete;
} UA_DeleteNodesRequest;

#define UA_TYPES_DELETENODESREQUEST 190

/**
 * DeleteNodesResponse
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteNodesResponse;

#define UA_TYPES_DELETENODESRESPONSE 191

/**
 * DeleteReferencesItem
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId sourceNodeId;
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    UA_ExpandedNodeId targetNodeId;
    UA_Boolean deleteBidirectional;
} UA_DeleteReferencesItem;

#define UA_TYPES_DELETEREFERENCESITEM 192

/**
 * DeleteReferencesRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t referencesToDeleteSize;
    UA_DeleteReferencesItem *referencesToDelete;
} UA_DeleteReferencesRequest;

#define UA_TYPES_DELETEREFERENCESREQUEST 193

/**
 * DeleteReferencesResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteReferencesResponse;

#define UA_TYPES_DELETEREFERENCESRESPONSE 194

/**
 * AttributeWriteMask
 * ^^^^^^^^^^^^^^^^^^
 */
typedef UA_UInt32 UA_AttributeWriteMask;

#define UA_ATTRIBUTEWRITEMASK_NONE 0
#define UA_ATTRIBUTEWRITEMASK_ACCESSLEVEL 1
#define UA_ATTRIBUTEWRITEMASK_ARRAYDIMENSIONS 2
#define UA_ATTRIBUTEWRITEMASK_BROWSENAME 4
#define UA_ATTRIBUTEWRITEMASK_CONTAINSNOLOOPS 8
#define UA_ATTRIBUTEWRITEMASK_DATATYPE 16
#define UA_ATTRIBUTEWRITEMASK_DESCRIPTION 32
#define UA_ATTRIBUTEWRITEMASK_DISPLAYNAME 64
#define UA_ATTRIBUTEWRITEMASK_EVENTNOTIFIER 128
#define UA_ATTRIBUTEWRITEMASK_EXECUTABLE 256
#define UA_ATTRIBUTEWRITEMASK_HISTORIZING 512
#define UA_ATTRIBUTEWRITEMASK_INVERSENAME 1024
#define UA_ATTRIBUTEWRITEMASK_ISABSTRACT 2048
#define UA_ATTRIBUTEWRITEMASK_MINIMUMSAMPLINGINTERVAL 4096
#define UA_ATTRIBUTEWRITEMASK_NODECLASS 8192
#define UA_ATTRIBUTEWRITEMASK_NODEID 16384
#define UA_ATTRIBUTEWRITEMASK_SYMMETRIC 32768
#define UA_ATTRIBUTEWRITEMASK_USERACCESSLEVEL 65536
#define UA_ATTRIBUTEWRITEMASK_USEREXECUTABLE 131072
#define UA_ATTRIBUTEWRITEMASK_USERWRITEMASK 262144
#define UA_ATTRIBUTEWRITEMASK_VALUERANK 524288
#define UA_ATTRIBUTEWRITEMASK_WRITEMASK 1048576
#define UA_ATTRIBUTEWRITEMASK_VALUEFORVARIABLETYPE 2097152
#define UA_ATTRIBUTEWRITEMASK_DATATYPEDEFINITION 4194304
#define UA_ATTRIBUTEWRITEMASK_ROLEPERMISSIONS 8388608
#define UA_ATTRIBUTEWRITEMASK_ACCESSRESTRICTIONS 16777216
#define UA_ATTRIBUTEWRITEMASK_ACCESSLEVELEX 33554432

#define UA_TYPES_ATTRIBUTEWRITEMASK 195

/**
 * BrowseDirection
 * ^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_BROWSEDIRECTION_FORWARD = 0,
    UA_BROWSEDIRECTION_INVERSE = 1,
    UA_BROWSEDIRECTION_BOTH = 2,
    UA_BROWSEDIRECTION_INVALID = 3,
    __UA_BROWSEDIRECTION_FORCE32BIT = 0x7fffffff
} UA_BrowseDirection;
UA_STATIC_ASSERT(sizeof(UA_BrowseDirection) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_BROWSEDIRECTION 196

/**
 * ViewDescription
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId viewId;
    UA_DateTime timestamp;
    UA_UInt32 viewVersion;
} UA_ViewDescription;

#define UA_TYPES_VIEWDESCRIPTION 197

/**
 * BrowseDescription
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_BrowseDirection browseDirection;
    UA_NodeId referenceTypeId;
    UA_Boolean includeSubtypes;
    UA_UInt32 nodeClassMask;
    UA_UInt32 resultMask;
} UA_BrowseDescription;

#define UA_TYPES_BROWSEDESCRIPTION 198

/**
 * BrowseResultMask
 * ^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_BROWSERESULTMASK_NONE = 0,
    UA_BROWSERESULTMASK_REFERENCETYPEID = 1,
    UA_BROWSERESULTMASK_ISFORWARD = 2,
    UA_BROWSERESULTMASK_NODECLASS = 4,
    UA_BROWSERESULTMASK_BROWSENAME = 8,
    UA_BROWSERESULTMASK_DISPLAYNAME = 16,
    UA_BROWSERESULTMASK_TYPEDEFINITION = 32,
    UA_BROWSERESULTMASK_ALL = 63,
    UA_BROWSERESULTMASK_REFERENCETYPEINFO = 3,
    UA_BROWSERESULTMASK_TARGETINFO = 60,
    __UA_BROWSERESULTMASK_FORCE32BIT = 0x7fffffff
} UA_BrowseResultMask;
UA_STATIC_ASSERT(sizeof(UA_BrowseResultMask) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_BROWSERESULTMASK 199

/**
 * ReferenceDescription
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    UA_ExpandedNodeId nodeId;
    UA_QualifiedName browseName;
    UA_LocalizedText displayName;
    UA_NodeClass nodeClass;
    UA_ExpandedNodeId typeDefinition;
} UA_ReferenceDescription;

#define UA_TYPES_REFERENCEDESCRIPTION 200

/**
 * ContinuationPoint
 * ^^^^^^^^^^^^^^^^^
 */
typedef UA_ByteString UA_ContinuationPoint;

#define UA_TYPES_CONTINUATIONPOINT 201

/**
 * BrowseResult
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_ByteString continuationPoint;
    size_t referencesSize;
    UA_ReferenceDescription *references;
} UA_BrowseResult;

#define UA_TYPES_BROWSERESULT 202

/**
 * BrowseRequest
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ViewDescription view;
    UA_UInt32 requestedMaxReferencesPerNode;
    size_t nodesToBrowseSize;
    UA_BrowseDescription *nodesToBrowse;
} UA_BrowseRequest;

#define UA_TYPES_BROWSEREQUEST 203

/**
 * BrowseResponse
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_BrowseResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_BrowseResponse;

#define UA_TYPES_BROWSERESPONSE 204

/**
 * BrowseNextRequest
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean releaseContinuationPoints;
    size_t continuationPointsSize;
    UA_ByteString *continuationPoints;
} UA_BrowseNextRequest;

#define UA_TYPES_BROWSENEXTREQUEST 205

/**
 * BrowseNextResponse
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_BrowseResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_BrowseNextResponse;

#define UA_TYPES_BROWSENEXTRESPONSE 206

/**
 * RelativePathElement
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId referenceTypeId;
    UA_Boolean isInverse;
    UA_Boolean includeSubtypes;
    UA_QualifiedName targetName;
} UA_RelativePathElement;

#define UA_TYPES_RELATIVEPATHELEMENT 207

/**
 * RelativePath
 * ^^^^^^^^^^^^
 */
typedef struct {
    size_t elementsSize;
    UA_RelativePathElement *elements;
} UA_RelativePath;

#define UA_TYPES_RELATIVEPATH 208

/**
 * BrowsePath
 * ^^^^^^^^^^
 */
typedef struct {
    UA_NodeId startingNode;
    UA_RelativePath relativePath;
} UA_BrowsePath;

#define UA_TYPES_BROWSEPATH 209

/**
 * BrowsePathTarget
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ExpandedNodeId targetId;
    UA_UInt32 remainingPathIndex;
} UA_BrowsePathTarget;

#define UA_TYPES_BROWSEPATHTARGET 210

/**
 * BrowsePathResult
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t targetsSize;
    UA_BrowsePathTarget *targets;
} UA_BrowsePathResult;

#define UA_TYPES_BROWSEPATHRESULT 211

/**
 * TranslateBrowsePathsToNodeIdsRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t browsePathsSize;
    UA_BrowsePath *browsePaths;
} UA_TranslateBrowsePathsToNodeIdsRequest;

#define UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST 212

/**
 * TranslateBrowsePathsToNodeIdsResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_BrowsePathResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_TranslateBrowsePathsToNodeIdsResponse;

#define UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE 213

/**
 * RegisterNodesRequest
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToRegisterSize;
    UA_NodeId *nodesToRegister;
} UA_RegisterNodesRequest;

#define UA_TYPES_REGISTERNODESREQUEST 214

/**
 * RegisterNodesResponse
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t registeredNodeIdsSize;
    UA_NodeId *registeredNodeIds;
} UA_RegisterNodesResponse;

#define UA_TYPES_REGISTERNODESRESPONSE 215

/**
 * UnregisterNodesRequest
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToUnregisterSize;
    UA_NodeId *nodesToUnregister;
} UA_UnregisterNodesRequest;

#define UA_TYPES_UNREGISTERNODESREQUEST 216

/**
 * UnregisterNodesResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_UnregisterNodesResponse;

#define UA_TYPES_UNREGISTERNODESRESPONSE 217

/**
 * Counter
 * ^^^^^^^
 */
typedef UA_UInt32 UA_Counter;

#define UA_TYPES_COUNTER 218

/**
 * Time
 * ^^^^
 */
typedef UA_String UA_Time;

#define UA_TYPES_TIME 219

/**
 * Date
 * ^^^^
 */
typedef UA_DateTime UA_Date;

#define UA_TYPES_DATE 220

/**
 * EndpointConfiguration
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int32 operationTimeout;
    UA_Boolean useBinaryEncoding;
    UA_Int32 maxStringLength;
    UA_Int32 maxByteStringLength;
    UA_Int32 maxArrayLength;
    UA_Int32 maxMessageSize;
    UA_Int32 maxBufferSize;
    UA_Int32 channelLifetime;
    UA_Int32 securityTokenLifetime;
} UA_EndpointConfiguration;

#define UA_TYPES_ENDPOINTCONFIGURATION 221

/**
 * QueryDataDescription
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RelativePath relativePath;
    UA_UInt32 attributeId;
    UA_String indexRange;
} UA_QueryDataDescription;

#define UA_TYPES_QUERYDATADESCRIPTION 222

/**
 * NodeTypeDescription
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ExpandedNodeId typeDefinitionNode;
    UA_Boolean includeSubTypes;
    size_t dataToReturnSize;
    UA_QueryDataDescription *dataToReturn;
} UA_NodeTypeDescription;

#define UA_TYPES_NODETYPEDESCRIPTION 223

/**
 * FilterOperator
 * ^^^^^^^^^^^^^^
 */
typedef enum {
    UA_FILTEROPERATOR_EQUALS = 0,
    UA_FILTEROPERATOR_ISNULL = 1,
    UA_FILTEROPERATOR_GREATERTHAN = 2,
    UA_FILTEROPERATOR_LESSTHAN = 3,
    UA_FILTEROPERATOR_GREATERTHANOREQUAL = 4,
    UA_FILTEROPERATOR_LESSTHANOREQUAL = 5,
    UA_FILTEROPERATOR_LIKE = 6,
    UA_FILTEROPERATOR_NOT = 7,
    UA_FILTEROPERATOR_BETWEEN = 8,
    UA_FILTEROPERATOR_INLIST = 9,
    UA_FILTEROPERATOR_AND = 10,
    UA_FILTEROPERATOR_OR = 11,
    UA_FILTEROPERATOR_CAST = 12,
    UA_FILTEROPERATOR_INVIEW = 13,
    UA_FILTEROPERATOR_OFTYPE = 14,
    UA_FILTEROPERATOR_RELATEDTO = 15,
    UA_FILTEROPERATOR_BITWISEAND = 16,
    UA_FILTEROPERATOR_BITWISEOR = 17,
    __UA_FILTEROPERATOR_FORCE32BIT = 0x7fffffff
} UA_FilterOperator;
UA_STATIC_ASSERT(sizeof(UA_FilterOperator) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_FILTEROPERATOR 224

/**
 * QueryDataSet
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_ExpandedNodeId nodeId;
    UA_ExpandedNodeId typeDefinitionNode;
    size_t valuesSize;
    UA_Variant *values;
} UA_QueryDataSet;

#define UA_TYPES_QUERYDATASET 225

/**
 * NodeReference
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    size_t referencedNodeIdsSize;
    UA_NodeId *referencedNodeIds;
} UA_NodeReference;

#define UA_TYPES_NODEREFERENCE 226

/**
 * ContentFilterElement
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_FilterOperator filterOperator;
    size_t filterOperandsSize;
    UA_ExtensionObject *filterOperands;
} UA_ContentFilterElement;

#define UA_TYPES_CONTENTFILTERELEMENT 227

/**
 * ContentFilter
 * ^^^^^^^^^^^^^
 */
typedef struct {
    size_t elementsSize;
    UA_ContentFilterElement *elements;
} UA_ContentFilter;

#define UA_TYPES_CONTENTFILTER 228

/**
 * FilterOperand
 * ^^^^^^^^^^^^^
 */
typedef void * UA_FilterOperand;

#define UA_TYPES_FILTEROPERAND 229

/**
 * ElementOperand
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 index;
} UA_ElementOperand;

#define UA_TYPES_ELEMENTOPERAND 230

/**
 * LiteralOperand
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Variant value;
} UA_LiteralOperand;

#define UA_TYPES_LITERALOPERAND 231

/**
 * AttributeOperand
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_String alias;
    UA_RelativePath browsePath;
    UA_UInt32 attributeId;
    UA_String indexRange;
} UA_AttributeOperand;

#define UA_TYPES_ATTRIBUTEOPERAND 232

/**
 * SimpleAttributeOperand
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId typeDefinitionId;
    size_t browsePathSize;
    UA_QualifiedName *browsePath;
    UA_UInt32 attributeId;
    UA_String indexRange;
} UA_SimpleAttributeOperand;

#define UA_TYPES_SIMPLEATTRIBUTEOPERAND 233

/**
 * ContentFilterElementResult
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t operandStatusCodesSize;
    UA_StatusCode *operandStatusCodes;
    size_t operandDiagnosticInfosSize;
    UA_DiagnosticInfo *operandDiagnosticInfos;
} UA_ContentFilterElementResult;

#define UA_TYPES_CONTENTFILTERELEMENTRESULT 234

/**
 * ContentFilterResult
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t elementResultsSize;
    UA_ContentFilterElementResult *elementResults;
    size_t elementDiagnosticInfosSize;
    UA_DiagnosticInfo *elementDiagnosticInfos;
} UA_ContentFilterResult;

#define UA_TYPES_CONTENTFILTERRESULT 235

/**
 * ParsingResult
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t dataStatusCodesSize;
    UA_StatusCode *dataStatusCodes;
    size_t dataDiagnosticInfosSize;
    UA_DiagnosticInfo *dataDiagnosticInfos;
} UA_ParsingResult;

#define UA_TYPES_PARSINGRESULT 236

/**
 * QueryFirstRequest
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ViewDescription view;
    size_t nodeTypesSize;
    UA_NodeTypeDescription *nodeTypes;
    UA_ContentFilter filter;
    UA_UInt32 maxDataSetsToReturn;
    UA_UInt32 maxReferencesToReturn;
} UA_QueryFirstRequest;

#define UA_TYPES_QUERYFIRSTREQUEST 237

/**
 * QueryFirstResponse
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t queryDataSetsSize;
    UA_QueryDataSet *queryDataSets;
    UA_ByteString continuationPoint;
    size_t parsingResultsSize;
    UA_ParsingResult *parsingResults;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
    UA_ContentFilterResult filterResult;
} UA_QueryFirstResponse;

#define UA_TYPES_QUERYFIRSTRESPONSE 238

/**
 * QueryNextRequest
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean releaseContinuationPoint;
    UA_ByteString continuationPoint;
} UA_QueryNextRequest;

#define UA_TYPES_QUERYNEXTREQUEST 239

/**
 * QueryNextResponse
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t queryDataSetsSize;
    UA_QueryDataSet *queryDataSets;
    UA_ByteString revisedContinuationPoint;
} UA_QueryNextResponse;

#define UA_TYPES_QUERYNEXTRESPONSE 240

/**
 * TimestampsToReturn
 * ^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_TIMESTAMPSTORETURN_SOURCE = 0,
    UA_TIMESTAMPSTORETURN_SERVER = 1,
    UA_TIMESTAMPSTORETURN_BOTH = 2,
    UA_TIMESTAMPSTORETURN_NEITHER = 3,
    UA_TIMESTAMPSTORETURN_INVALID = 4,
    __UA_TIMESTAMPSTORETURN_FORCE32BIT = 0x7fffffff
} UA_TimestampsToReturn;
UA_STATIC_ASSERT(sizeof(UA_TimestampsToReturn) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_TIMESTAMPSTORETURN 241

/**
 * ReadValueId
 * ^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_UInt32 attributeId;
    UA_String indexRange;
    UA_QualifiedName dataEncoding;
} UA_ReadValueId;

#define UA_TYPES_READVALUEID 242

/**
 * ReadRequest
 * ^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Double maxAge;
    UA_TimestampsToReturn timestampsToReturn;
    size_t nodesToReadSize;
    UA_ReadValueId *nodesToRead;
} UA_ReadRequest;

#define UA_TYPES_READREQUEST 243

/**
 * ReadResponse
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_DataValue *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_ReadResponse;

#define UA_TYPES_READRESPONSE 244

/**
 * HistoryReadValueId
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_String indexRange;
    UA_QualifiedName dataEncoding;
    UA_ByteString continuationPoint;
} UA_HistoryReadValueId;

#define UA_TYPES_HISTORYREADVALUEID 245

/**
 * HistoryReadResult
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_ByteString continuationPoint;
    UA_ExtensionObject historyData;
} UA_HistoryReadResult;

#define UA_TYPES_HISTORYREADRESULT 246

/**
 * HistoryReadDetails
 * ^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_HistoryReadDetails;

#define UA_TYPES_HISTORYREADDETAILS 247

/**
 * ReadRawModifiedDetails
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Boolean isReadModified;
    UA_DateTime startTime;
    UA_DateTime endTime;
    UA_UInt32 numValuesPerNode;
    UA_Boolean returnBounds;
} UA_ReadRawModifiedDetails;

#define UA_TYPES_READRAWMODIFIEDDETAILS 248

/**
 * ReadAtTimeDetails
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t reqTimesSize;
    UA_DateTime *reqTimes;
    UA_Boolean useSimpleBounds;
} UA_ReadAtTimeDetails;

#define UA_TYPES_READATTIMEDETAILS 249

/**
 * ReadAnnotationDataDetails
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t reqTimesSize;
    UA_DateTime *reqTimes;
} UA_ReadAnnotationDataDetails;

#define UA_TYPES_READANNOTATIONDATADETAILS 250

/**
 * HistoryData
 * ^^^^^^^^^^^
 */
typedef struct {
    size_t dataValuesSize;
    UA_DataValue *dataValues;
} UA_HistoryData;

#define UA_TYPES_HISTORYDATA 251

/**
 * HistoryReadRequest
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ExtensionObject historyReadDetails;
    UA_TimestampsToReturn timestampsToReturn;
    UA_Boolean releaseContinuationPoints;
    size_t nodesToReadSize;
    UA_HistoryReadValueId *nodesToRead;
} UA_HistoryReadRequest;

#define UA_TYPES_HISTORYREADREQUEST 252

/**
 * HistoryReadResponse
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_HistoryReadResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_HistoryReadResponse;

#define UA_TYPES_HISTORYREADRESPONSE 253

/**
 * WriteValue
 * ^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_UInt32 attributeId;
    UA_String indexRange;
    UA_DataValue value;
} UA_WriteValue;

#define UA_TYPES_WRITEVALUE 254

/**
 * WriteRequest
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToWriteSize;
    UA_WriteValue *nodesToWrite;
} UA_WriteRequest;

#define UA_TYPES_WRITEREQUEST 255

/**
 * WriteResponse
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_WriteResponse;

#define UA_TYPES_WRITERESPONSE 256

/**
 * HistoryUpdateDetails
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
} UA_HistoryUpdateDetails;

#define UA_TYPES_HISTORYUPDATEDETAILS 257

/**
 * HistoryUpdateType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_HISTORYUPDATETYPE_INSERT = 1,
    UA_HISTORYUPDATETYPE_REPLACE = 2,
    UA_HISTORYUPDATETYPE_UPDATE = 3,
    UA_HISTORYUPDATETYPE_DELETE = 4,
    __UA_HISTORYUPDATETYPE_FORCE32BIT = 0x7fffffff
} UA_HistoryUpdateType;
UA_STATIC_ASSERT(sizeof(UA_HistoryUpdateType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_HISTORYUPDATETYPE 258

/**
 * PerformUpdateType
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_PERFORMUPDATETYPE_INSERT = 1,
    UA_PERFORMUPDATETYPE_REPLACE = 2,
    UA_PERFORMUPDATETYPE_UPDATE = 3,
    UA_PERFORMUPDATETYPE_REMOVE = 4,
    __UA_PERFORMUPDATETYPE_FORCE32BIT = 0x7fffffff
} UA_PerformUpdateType;
UA_STATIC_ASSERT(sizeof(UA_PerformUpdateType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_PERFORMUPDATETYPE 259

/**
 * UpdateDataDetails
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_PerformUpdateType performInsertReplace;
    size_t updateValuesSize;
    UA_DataValue *updateValues;
} UA_UpdateDataDetails;

#define UA_TYPES_UPDATEDATADETAILS 260

/**
 * UpdateStructureDataDetails
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_PerformUpdateType performInsertReplace;
    size_t updateValuesSize;
    UA_DataValue *updateValues;
} UA_UpdateStructureDataDetails;

#define UA_TYPES_UPDATESTRUCTUREDATADETAILS 261

/**
 * DeleteRawModifiedDetails
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_Boolean isDeleteModified;
    UA_DateTime startTime;
    UA_DateTime endTime;
} UA_DeleteRawModifiedDetails;

#define UA_TYPES_DELETERAWMODIFIEDDETAILS 262

/**
 * DeleteAtTimeDetails
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    size_t reqTimesSize;
    UA_DateTime *reqTimes;
} UA_DeleteAtTimeDetails;

#define UA_TYPES_DELETEATTIMEDETAILS 263

/**
 * DeleteEventDetails
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    size_t eventIdsSize;
    UA_ByteString *eventIds;
} UA_DeleteEventDetails;

#define UA_TYPES_DELETEEVENTDETAILS 264

/**
 * HistoryUpdateResult
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t operationResultsSize;
    UA_StatusCode *operationResults;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_HistoryUpdateResult;

#define UA_TYPES_HISTORYUPDATERESULT 265

/**
 * HistoryUpdateRequest
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t historyUpdateDetailsSize;
    UA_ExtensionObject *historyUpdateDetails;
} UA_HistoryUpdateRequest;

#define UA_TYPES_HISTORYUPDATEREQUEST 266

/**
 * HistoryUpdateResponse
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_HistoryUpdateResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_HistoryUpdateResponse;

#define UA_TYPES_HISTORYUPDATERESPONSE 267

/**
 * CallMethodRequest
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId objectId;
    UA_NodeId methodId;
    size_t inputArgumentsSize;
    UA_Variant *inputArguments;
} UA_CallMethodRequest;

#define UA_TYPES_CALLMETHODREQUEST 268

/**
 * CallMethodResult
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t inputArgumentResultsSize;
    UA_StatusCode *inputArgumentResults;
    size_t inputArgumentDiagnosticInfosSize;
    UA_DiagnosticInfo *inputArgumentDiagnosticInfos;
    size_t outputArgumentsSize;
    UA_Variant *outputArguments;
} UA_CallMethodResult;

#define UA_TYPES_CALLMETHODRESULT 269

/**
 * CallRequest
 * ^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t methodsToCallSize;
    UA_CallMethodRequest *methodsToCall;
} UA_CallRequest;

#define UA_TYPES_CALLREQUEST 270

/**
 * CallResponse
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_CallMethodResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_CallResponse;

#define UA_TYPES_CALLRESPONSE 271

/**
 * MonitoringMode
 * ^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MONITORINGMODE_DISABLED = 0,
    UA_MONITORINGMODE_SAMPLING = 1,
    UA_MONITORINGMODE_REPORTING = 2,
    __UA_MONITORINGMODE_FORCE32BIT = 0x7fffffff
} UA_MonitoringMode;
UA_STATIC_ASSERT(sizeof(UA_MonitoringMode) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MONITORINGMODE 272

/**
 * DataChangeTrigger
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_DATACHANGETRIGGER_STATUS = 0,
    UA_DATACHANGETRIGGER_STATUSVALUE = 1,
    UA_DATACHANGETRIGGER_STATUSVALUETIMESTAMP = 2,
    __UA_DATACHANGETRIGGER_FORCE32BIT = 0x7fffffff
} UA_DataChangeTrigger;
UA_STATIC_ASSERT(sizeof(UA_DataChangeTrigger) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_DATACHANGETRIGGER 273

/**
 * DeadbandType
 * ^^^^^^^^^^^^
 */
typedef enum {
    UA_DEADBANDTYPE_NONE = 0,
    UA_DEADBANDTYPE_ABSOLUTE = 1,
    UA_DEADBANDTYPE_PERCENT = 2,
    __UA_DEADBANDTYPE_FORCE32BIT = 0x7fffffff
} UA_DeadbandType;
UA_STATIC_ASSERT(sizeof(UA_DeadbandType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_DEADBANDTYPE 274

/**
 * MonitoringFilter
 * ^^^^^^^^^^^^^^^^
 */
typedef void * UA_MonitoringFilter;

#define UA_TYPES_MONITORINGFILTER 275

/**
 * DataChangeFilter
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DataChangeTrigger trigger;
    UA_UInt32 deadbandType;
    UA_Double deadbandValue;
} UA_DataChangeFilter;

#define UA_TYPES_DATACHANGEFILTER 276

/**
 * EventFilter
 * ^^^^^^^^^^^
 */
typedef struct {
    size_t selectClausesSize;
    UA_SimpleAttributeOperand *selectClauses;
    UA_ContentFilter whereClause;
} UA_EventFilter;

#define UA_TYPES_EVENTFILTER 277

/**
 * AggregateConfiguration
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Boolean useServerCapabilitiesDefaults;
    UA_Boolean treatUncertainAsBad;
    UA_Byte percentDataBad;
    UA_Byte percentDataGood;
    UA_Boolean useSlopedExtrapolation;
} UA_AggregateConfiguration;

#define UA_TYPES_AGGREGATECONFIGURATION 278

/**
 * AggregateFilter
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DateTime startTime;
    UA_NodeId aggregateType;
    UA_Double processingInterval;
    UA_AggregateConfiguration aggregateConfiguration;
} UA_AggregateFilter;

#define UA_TYPES_AGGREGATEFILTER 279

/**
 * MonitoringFilterResult
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef void * UA_MonitoringFilterResult;

#define UA_TYPES_MONITORINGFILTERRESULT 280

/**
 * EventFilterResult
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t selectClauseResultsSize;
    UA_StatusCode *selectClauseResults;
    size_t selectClauseDiagnosticInfosSize;
    UA_DiagnosticInfo *selectClauseDiagnosticInfos;
    UA_ContentFilterResult whereClauseResult;
} UA_EventFilterResult;

#define UA_TYPES_EVENTFILTERRESULT 281

/**
 * AggregateFilterResult
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DateTime revisedStartTime;
    UA_Double revisedProcessingInterval;
    UA_AggregateConfiguration revisedAggregateConfiguration;
} UA_AggregateFilterResult;

#define UA_TYPES_AGGREGATEFILTERRESULT 282

/**
 * MonitoringParameters
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 clientHandle;
    UA_Double samplingInterval;
    UA_ExtensionObject filter;
    UA_UInt32 queueSize;
    UA_Boolean discardOldest;
} UA_MonitoringParameters;

#define UA_TYPES_MONITORINGPARAMETERS 283

/**
 * MonitoredItemCreateRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ReadValueId itemToMonitor;
    UA_MonitoringMode monitoringMode;
    UA_MonitoringParameters requestedParameters;
} UA_MonitoredItemCreateRequest;

#define UA_TYPES_MONITOREDITEMCREATEREQUEST 284

/**
 * MonitoredItemCreateResult
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_UInt32 monitoredItemId;
    UA_Double revisedSamplingInterval;
    UA_UInt32 revisedQueueSize;
    UA_ExtensionObject filterResult;
} UA_MonitoredItemCreateResult;

#define UA_TYPES_MONITOREDITEMCREATERESULT 285

/**
 * CreateMonitoredItemsRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_TimestampsToReturn timestampsToReturn;
    size_t itemsToCreateSize;
    UA_MonitoredItemCreateRequest *itemsToCreate;
} UA_CreateMonitoredItemsRequest;

#define UA_TYPES_CREATEMONITOREDITEMSREQUEST 286

/**
 * CreateMonitoredItemsResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_MonitoredItemCreateResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_CreateMonitoredItemsResponse;

#define UA_TYPES_CREATEMONITOREDITEMSRESPONSE 287

/**
 * MonitoredItemModifyRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 monitoredItemId;
    UA_MonitoringParameters requestedParameters;
} UA_MonitoredItemModifyRequest;

#define UA_TYPES_MONITOREDITEMMODIFYREQUEST 288

/**
 * MonitoredItemModifyResult
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_Double revisedSamplingInterval;
    UA_UInt32 revisedQueueSize;
    UA_ExtensionObject filterResult;
} UA_MonitoredItemModifyResult;

#define UA_TYPES_MONITOREDITEMMODIFYRESULT 289

/**
 * ModifyMonitoredItemsRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_TimestampsToReturn timestampsToReturn;
    size_t itemsToModifySize;
    UA_MonitoredItemModifyRequest *itemsToModify;
} UA_ModifyMonitoredItemsRequest;

#define UA_TYPES_MODIFYMONITOREDITEMSREQUEST 290

/**
 * ModifyMonitoredItemsResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_MonitoredItemModifyResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_ModifyMonitoredItemsResponse;

#define UA_TYPES_MODIFYMONITOREDITEMSRESPONSE 291

/**
 * SetMonitoringModeRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_MonitoringMode monitoringMode;
    size_t monitoredItemIdsSize;
    UA_UInt32 *monitoredItemIds;
} UA_SetMonitoringModeRequest;

#define UA_TYPES_SETMONITORINGMODEREQUEST 292

/**
 * SetMonitoringModeResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_SetMonitoringModeResponse;

#define UA_TYPES_SETMONITORINGMODERESPONSE 293

/**
 * SetTriggeringRequest
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_UInt32 triggeringItemId;
    size_t linksToAddSize;
    UA_UInt32 *linksToAdd;
    size_t linksToRemoveSize;
    UA_UInt32 *linksToRemove;
} UA_SetTriggeringRequest;

#define UA_TYPES_SETTRIGGERINGREQUEST 294

/**
 * SetTriggeringResponse
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t addResultsSize;
    UA_StatusCode *addResults;
    size_t addDiagnosticInfosSize;
    UA_DiagnosticInfo *addDiagnosticInfos;
    size_t removeResultsSize;
    UA_StatusCode *removeResults;
    size_t removeDiagnosticInfosSize;
    UA_DiagnosticInfo *removeDiagnosticInfos;
} UA_SetTriggeringResponse;

#define UA_TYPES_SETTRIGGERINGRESPONSE 295

/**
 * DeleteMonitoredItemsRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    size_t monitoredItemIdsSize;
    UA_UInt32 *monitoredItemIds;
} UA_DeleteMonitoredItemsRequest;

#define UA_TYPES_DELETEMONITOREDITEMSREQUEST 296

/**
 * DeleteMonitoredItemsResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteMonitoredItemsResponse;

#define UA_TYPES_DELETEMONITOREDITEMSRESPONSE 297

/**
 * CreateSubscriptionRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Double requestedPublishingInterval;
    UA_UInt32 requestedLifetimeCount;
    UA_UInt32 requestedMaxKeepAliveCount;
    UA_UInt32 maxNotificationsPerPublish;
    UA_Boolean publishingEnabled;
    UA_Byte priority;
} UA_CreateSubscriptionRequest;

#define UA_TYPES_CREATESUBSCRIPTIONREQUEST 298

/**
 * CreateSubscriptionResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 subscriptionId;
    UA_Double revisedPublishingInterval;
    UA_UInt32 revisedLifetimeCount;
    UA_UInt32 revisedMaxKeepAliveCount;
} UA_CreateSubscriptionResponse;

#define UA_TYPES_CREATESUBSCRIPTIONRESPONSE 299

/**
 * ModifySubscriptionRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_Double requestedPublishingInterval;
    UA_UInt32 requestedLifetimeCount;
    UA_UInt32 requestedMaxKeepAliveCount;
    UA_UInt32 maxNotificationsPerPublish;
    UA_Byte priority;
} UA_ModifySubscriptionRequest;

#define UA_TYPES_MODIFYSUBSCRIPTIONREQUEST 300

/**
 * ModifySubscriptionResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_Double revisedPublishingInterval;
    UA_UInt32 revisedLifetimeCount;
    UA_UInt32 revisedMaxKeepAliveCount;
} UA_ModifySubscriptionResponse;

#define UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE 301

/**
 * SetPublishingModeRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean publishingEnabled;
    size_t subscriptionIdsSize;
    UA_UInt32 *subscriptionIds;
} UA_SetPublishingModeRequest;

#define UA_TYPES_SETPUBLISHINGMODEREQUEST 302

/**
 * SetPublishingModeResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_SetPublishingModeResponse;

#define UA_TYPES_SETPUBLISHINGMODERESPONSE 303

/**
 * NotificationMessage
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 sequenceNumber;
    UA_DateTime publishTime;
    size_t notificationDataSize;
    UA_ExtensionObject *notificationData;
} UA_NotificationMessage;

#define UA_TYPES_NOTIFICATIONMESSAGE 304

/**
 * NotificationData
 * ^^^^^^^^^^^^^^^^
 */
typedef void * UA_NotificationData;

#define UA_TYPES_NOTIFICATIONDATA 305

/**
 * MonitoredItemNotification
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 clientHandle;
    UA_DataValue value;
} UA_MonitoredItemNotification;

#define UA_TYPES_MONITOREDITEMNOTIFICATION 306

/**
 * EventFieldList
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 clientHandle;
    size_t eventFieldsSize;
    UA_Variant *eventFields;
} UA_EventFieldList;

#define UA_TYPES_EVENTFIELDLIST 307

/**
 * HistoryEventFieldList
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t eventFieldsSize;
    UA_Variant *eventFields;
} UA_HistoryEventFieldList;

#define UA_TYPES_HISTORYEVENTFIELDLIST 308

/**
 * StatusChangeNotification
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode status;
    UA_DiagnosticInfo diagnosticInfo;
} UA_StatusChangeNotification;

#define UA_TYPES_STATUSCHANGENOTIFICATION 309

/**
 * SubscriptionAcknowledgement
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 subscriptionId;
    UA_UInt32 sequenceNumber;
} UA_SubscriptionAcknowledgement;

#define UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT 310

/**
 * PublishRequest
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t subscriptionAcknowledgementsSize;
    UA_SubscriptionAcknowledgement *subscriptionAcknowledgements;
} UA_PublishRequest;

#define UA_TYPES_PUBLISHREQUEST 311

/**
 * PublishResponse
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 subscriptionId;
    size_t availableSequenceNumbersSize;
    UA_UInt32 *availableSequenceNumbers;
    UA_Boolean moreNotifications;
    UA_NotificationMessage notificationMessage;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_PublishResponse;

#define UA_TYPES_PUBLISHRESPONSE 312

/**
 * RepublishRequest
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_UInt32 retransmitSequenceNumber;
} UA_RepublishRequest;

#define UA_TYPES_REPUBLISHREQUEST 313

/**
 * RepublishResponse
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_NotificationMessage notificationMessage;
} UA_RepublishResponse;

#define UA_TYPES_REPUBLISHRESPONSE 314

/**
 * TransferResult
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t availableSequenceNumbersSize;
    UA_UInt32 *availableSequenceNumbers;
} UA_TransferResult;

#define UA_TYPES_TRANSFERRESULT 315

/**
 * TransferSubscriptionsRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t subscriptionIdsSize;
    UA_UInt32 *subscriptionIds;
    UA_Boolean sendInitialValues;
} UA_TransferSubscriptionsRequest;

#define UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST 316

/**
 * TransferSubscriptionsResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_TransferResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_TransferSubscriptionsResponse;

#define UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE 317

/**
 * DeleteSubscriptionsRequest
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t subscriptionIdsSize;
    UA_UInt32 *subscriptionIds;
} UA_DeleteSubscriptionsRequest;

#define UA_TYPES_DELETESUBSCRIPTIONSREQUEST 318

/**
 * DeleteSubscriptionsResponse
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteSubscriptionsResponse;

#define UA_TYPES_DELETESUBSCRIPTIONSRESPONSE 319

/**
 * BuildInfo
 * ^^^^^^^^^
 */
typedef struct {
    UA_String productUri;
    UA_String manufacturerName;
    UA_String productName;
    UA_String softwareVersion;
    UA_String buildNumber;
    UA_DateTime buildDate;
} UA_BuildInfo;

#define UA_TYPES_BUILDINFO 320

/**
 * RedundancySupport
 * ^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_REDUNDANCYSUPPORT_NONE = 0,
    UA_REDUNDANCYSUPPORT_COLD = 1,
    UA_REDUNDANCYSUPPORT_WARM = 2,
    UA_REDUNDANCYSUPPORT_HOT = 3,
    UA_REDUNDANCYSUPPORT_TRANSPARENT = 4,
    UA_REDUNDANCYSUPPORT_HOTANDMIRRORED = 5,
    __UA_REDUNDANCYSUPPORT_FORCE32BIT = 0x7fffffff
} UA_RedundancySupport;
UA_STATIC_ASSERT(sizeof(UA_RedundancySupport) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_REDUNDANCYSUPPORT 321

/**
 * ServerState
 * ^^^^^^^^^^^
 */
typedef enum {
    UA_SERVERSTATE_RUNNING = 0,
    UA_SERVERSTATE_FAILED = 1,
    UA_SERVERSTATE_NOCONFIGURATION = 2,
    UA_SERVERSTATE_SUSPENDED = 3,
    UA_SERVERSTATE_SHUTDOWN = 4,
    UA_SERVERSTATE_TEST = 5,
    UA_SERVERSTATE_COMMUNICATIONFAULT = 6,
    UA_SERVERSTATE_UNKNOWN = 7,
    __UA_SERVERSTATE_FORCE32BIT = 0x7fffffff
} UA_ServerState;
UA_STATIC_ASSERT(sizeof(UA_ServerState) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_SERVERSTATE 322

/**
 * RedundantServerDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String serverId;
    UA_Byte serviceLevel;
    UA_ServerState serverState;
} UA_RedundantServerDataType;

#define UA_TYPES_REDUNDANTSERVERDATATYPE 323

/**
 * EndpointUrlListDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t endpointUrlListSize;
    UA_String *endpointUrlList;
} UA_EndpointUrlListDataType;

#define UA_TYPES_ENDPOINTURLLISTDATATYPE 324

/**
 * NetworkGroupDataType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String serverUri;
    size_t networkPathsSize;
    UA_EndpointUrlListDataType *networkPaths;
} UA_NetworkGroupDataType;

#define UA_TYPES_NETWORKGROUPDATATYPE 325

/**
 * SamplingIntervalDiagnosticsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Double samplingInterval;
    UA_UInt32 monitoredItemCount;
    UA_UInt32 maxMonitoredItemCount;
    UA_UInt32 disabledMonitoredItemCount;
} UA_SamplingIntervalDiagnosticsDataType;

#define UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE 326

/**
 * ServerDiagnosticsSummaryDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 serverViewCount;
    UA_UInt32 currentSessionCount;
    UA_UInt32 cumulatedSessionCount;
    UA_UInt32 securityRejectedSessionCount;
    UA_UInt32 rejectedSessionCount;
    UA_UInt32 sessionTimeoutCount;
    UA_UInt32 sessionAbortCount;
    UA_UInt32 currentSubscriptionCount;
    UA_UInt32 cumulatedSubscriptionCount;
    UA_UInt32 publishingIntervalCount;
    UA_UInt32 securityRejectedRequestsCount;
    UA_UInt32 rejectedRequestsCount;
} UA_ServerDiagnosticsSummaryDataType;

#define UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE 327

/**
 * ServerStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DateTime startTime;
    UA_DateTime currentTime;
    UA_ServerState state;
    UA_BuildInfo buildInfo;
    UA_UInt32 secondsTillShutdown;
    UA_LocalizedText shutdownReason;
} UA_ServerStatusDataType;

#define UA_TYPES_SERVERSTATUSDATATYPE 328

/**
 * SessionSecurityDiagnosticsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId sessionId;
    UA_String clientUserIdOfSession;
    size_t clientUserIdHistorySize;
    UA_String *clientUserIdHistory;
    UA_String authenticationMechanism;
    UA_String encoding;
    UA_String transportProtocol;
    UA_MessageSecurityMode securityMode;
    UA_String securityPolicyUri;
    UA_ByteString clientCertificate;
} UA_SessionSecurityDiagnosticsDataType;

#define UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE 329

/**
 * ServiceCounterDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 totalCount;
    UA_UInt32 errorCount;
} UA_ServiceCounterDataType;

#define UA_TYPES_SERVICECOUNTERDATATYPE 330

/**
 * StatusResult
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_DiagnosticInfo diagnosticInfo;
} UA_StatusResult;

#define UA_TYPES_STATUSRESULT 331

/**
 * SubscriptionDiagnosticsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId sessionId;
    UA_UInt32 subscriptionId;
    UA_Byte priority;
    UA_Double publishingInterval;
    UA_UInt32 maxKeepAliveCount;
    UA_UInt32 maxLifetimeCount;
    UA_UInt32 maxNotificationsPerPublish;
    UA_Boolean publishingEnabled;
    UA_UInt32 modifyCount;
    UA_UInt32 enableCount;
    UA_UInt32 disableCount;
    UA_UInt32 republishRequestCount;
    UA_UInt32 republishMessageRequestCount;
    UA_UInt32 republishMessageCount;
    UA_UInt32 transferRequestCount;
    UA_UInt32 transferredToAltClientCount;
    UA_UInt32 transferredToSameClientCount;
    UA_UInt32 publishRequestCount;
    UA_UInt32 dataChangeNotificationsCount;
    UA_UInt32 eventNotificationsCount;
    UA_UInt32 notificationsCount;
    UA_UInt32 latePublishRequestCount;
    UA_UInt32 currentKeepAliveCount;
    UA_UInt32 currentLifetimeCount;
    UA_UInt32 unacknowledgedMessageCount;
    UA_UInt32 discardedMessageCount;
    UA_UInt32 monitoredItemCount;
    UA_UInt32 disabledMonitoredItemCount;
    UA_UInt32 monitoringQueueOverflowCount;
    UA_UInt32 nextSequenceNumber;
    UA_UInt32 eventQueueOverFlowCount;
} UA_SubscriptionDiagnosticsDataType;

#define UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE 332

/**
 * ModelChangeStructureVerbMask
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MODELCHANGESTRUCTUREVERBMASK_NODEADDED = 1,
    UA_MODELCHANGESTRUCTUREVERBMASK_NODEDELETED = 2,
    UA_MODELCHANGESTRUCTUREVERBMASK_REFERENCEADDED = 4,
    UA_MODELCHANGESTRUCTUREVERBMASK_REFERENCEDELETED = 8,
    UA_MODELCHANGESTRUCTUREVERBMASK_DATATYPECHANGED = 16,
    __UA_MODELCHANGESTRUCTUREVERBMASK_FORCE32BIT = 0x7fffffff
} UA_ModelChangeStructureVerbMask;
UA_STATIC_ASSERT(sizeof(UA_ModelChangeStructureVerbMask) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_MODELCHANGESTRUCTUREVERBMASK 333

/**
 * ModelChangeStructureDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId affected;
    UA_NodeId affectedType;
    UA_Byte verb;
} UA_ModelChangeStructureDataType;

#define UA_TYPES_MODELCHANGESTRUCTUREDATATYPE 334

/**
 * SemanticChangeStructureDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId affected;
    UA_NodeId affectedType;
} UA_SemanticChangeStructureDataType;

#define UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE 335

/**
 * Range
 * ^^^^^
 */
typedef struct {
    UA_Double low;
    UA_Double high;
} UA_Range;

#define UA_TYPES_RANGE 336

/**
 * EUInformation
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_String namespaceUri;
    UA_Int32 unitId;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
} UA_EUInformation;

#define UA_TYPES_EUINFORMATION 337

/**
 * AxisScaleEnumeration
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_AXISSCALEENUMERATION_LINEAR = 0,
    UA_AXISSCALEENUMERATION_LOG = 1,
    UA_AXISSCALEENUMERATION_LN = 2,
    __UA_AXISSCALEENUMERATION_FORCE32BIT = 0x7fffffff
} UA_AxisScaleEnumeration;
UA_STATIC_ASSERT(sizeof(UA_AxisScaleEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_AXISSCALEENUMERATION 338

/**
 * ComplexNumberType
 * ^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Float real;
    UA_Float imaginary;
} UA_ComplexNumberType;

#define UA_TYPES_COMPLEXNUMBERTYPE 339

/**
 * DoubleComplexNumberType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Double real;
    UA_Double imaginary;
} UA_DoubleComplexNumberType;

#define UA_TYPES_DOUBLECOMPLEXNUMBERTYPE 340

/**
 * AxisInformation
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_EUInformation engineeringUnits;
    UA_Range eURange;
    UA_LocalizedText title;
    UA_AxisScaleEnumeration axisScaleType;
    size_t axisStepsSize;
    UA_Double *axisSteps;
} UA_AxisInformation;

#define UA_TYPES_AXISINFORMATION 341

/**
 * XVType
 * ^^^^^^
 */
typedef struct {
    UA_Double x;
    UA_Float value;
} UA_XVType;

#define UA_TYPES_XVTYPE 342

/**
 * ProgramDiagnosticDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId createSessionId;
    UA_String createClientName;
    UA_DateTime invocationCreationTime;
    UA_DateTime lastTransitionTime;
    UA_String lastMethodCall;
    UA_NodeId lastMethodSessionId;
    size_t lastMethodInputArgumentsSize;
    UA_Argument *lastMethodInputArguments;
    size_t lastMethodOutputArgumentsSize;
    UA_Argument *lastMethodOutputArguments;
    UA_DateTime lastMethodCallTime;
    UA_StatusResult lastMethodReturnStatus;
} UA_ProgramDiagnosticDataType;

#define UA_TYPES_PROGRAMDIAGNOSTICDATATYPE 343

/**
 * ProgramDiagnostic2DataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId createSessionId;
    UA_String createClientName;
    UA_DateTime invocationCreationTime;
    UA_DateTime lastTransitionTime;
    UA_String lastMethodCall;
    UA_NodeId lastMethodSessionId;
    size_t lastMethodInputArgumentsSize;
    UA_Argument *lastMethodInputArguments;
    size_t lastMethodOutputArgumentsSize;
    UA_Argument *lastMethodOutputArguments;
    size_t lastMethodInputValuesSize;
    UA_Variant *lastMethodInputValues;
    size_t lastMethodOutputValuesSize;
    UA_Variant *lastMethodOutputValues;
    UA_DateTime lastMethodCallTime;
    UA_StatusResult lastMethodReturnStatus;
} UA_ProgramDiagnostic2DataType;

#define UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE 344

/**
 * Annotation
 * ^^^^^^^^^^
 */
typedef struct {
    UA_String message;
    UA_String userName;
    UA_DateTime annotationTime;
} UA_Annotation;

#define UA_TYPES_ANNOTATION 345

/**
 * ExceptionDeviationFormat
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_EXCEPTIONDEVIATIONFORMAT_ABSOLUTEVALUE = 0,
    UA_EXCEPTIONDEVIATIONFORMAT_PERCENTOFVALUE = 1,
    UA_EXCEPTIONDEVIATIONFORMAT_PERCENTOFRANGE = 2,
    UA_EXCEPTIONDEVIATIONFORMAT_PERCENTOFEURANGE = 3,
    UA_EXCEPTIONDEVIATIONFORMAT_UNKNOWN = 4,
    __UA_EXCEPTIONDEVIATIONFORMAT_FORCE32BIT = 0x7fffffff
} UA_ExceptionDeviationFormat;
UA_STATIC_ASSERT(sizeof(UA_ExceptionDeviationFormat) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_EXCEPTIONDEVIATIONFORMAT 346

/**
 * EndpointType
 * ^^^^^^^^^^^^
 */
typedef struct {
    UA_String endpointUrl;
    UA_MessageSecurityMode securityMode;
    UA_String securityPolicyUri;
    UA_String transportProfileUri;
} UA_EndpointType;

#define UA_TYPES_ENDPOINTTYPE 347

/**
 * StructureDescription
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId dataTypeId;
    UA_QualifiedName name;
    UA_StructureDefinition structureDefinition;
} UA_StructureDescription;

#define UA_TYPES_STRUCTUREDESCRIPTION 348

/**
 * FieldMetaData
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_LocalizedText description;
    UA_DataSetFieldFlags fieldFlags;
    UA_Byte builtInType;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_UInt32 maxStringLength;
    UA_Guid dataSetFieldId;
    size_t propertiesSize;
    UA_KeyValuePair *properties;
} UA_FieldMetaData;

#define UA_TYPES_FIELDMETADATA 349

/**
 * PublishedEventsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId eventNotifier;
    size_t selectedFieldsSize;
    UA_SimpleAttributeOperand *selectedFields;
    UA_ContentFilter filter;
} UA_PublishedEventsDataType;

#define UA_TYPES_PUBLISHEDEVENTSDATATYPE 350

/**
 * PubSubGroupDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_Boolean enabled;
    UA_MessageSecurityMode securityMode;
    UA_String securityGroupId;
    size_t securityKeyServicesSize;
    UA_EndpointDescription *securityKeyServices;
    UA_UInt32 maxNetworkMessageSize;
    size_t groupPropertiesSize;
    UA_KeyValuePair *groupProperties;
} UA_PubSubGroupDataType;

#define UA_TYPES_PUBSUBGROUPDATATYPE 351

/**
 * WriterGroupDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_Boolean enabled;
    UA_MessageSecurityMode securityMode;
    UA_String securityGroupId;
    size_t securityKeyServicesSize;
    UA_EndpointDescription *securityKeyServices;
    UA_UInt32 maxNetworkMessageSize;
    size_t groupPropertiesSize;
    UA_KeyValuePair *groupProperties;
    UA_UInt16 writerGroupId;
    UA_Double publishingInterval;
    UA_Double keepAliveTime;
    UA_Byte priority;
    size_t localeIdsSize;
    UA_String *localeIds;
    UA_String headerLayoutUri;
    UA_ExtensionObject transportSettings;
    UA_ExtensionObject messageSettings;
    size_t dataSetWritersSize;
    UA_DataSetWriterDataType *dataSetWriters;
} UA_WriterGroupDataType;

#define UA_TYPES_WRITERGROUPDATATYPE 352

/**
 * FieldTargetDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_Guid dataSetFieldId;
    UA_String receiverIndexRange;
    UA_NodeId targetNodeId;
    UA_UInt32 attributeId;
    UA_String writeIndexRange;
    UA_OverrideValueHandling overrideValueHandling;
    UA_Variant overrideValue;
} UA_FieldTargetDataType;

#define UA_TYPES_FIELDTARGETDATATYPE 353

/**
 * SubscribedDataSetMirrorDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String parentNodeName;
    size_t rolePermissionsSize;
    UA_RolePermissionType *rolePermissions;
} UA_SubscribedDataSetMirrorDataType;

#define UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE 354

/**
 * EnumDefinition
 * ^^^^^^^^^^^^^^
 */
typedef struct {
    size_t fieldsSize;
    UA_EnumField *fields;
} UA_EnumDefinition;

#define UA_TYPES_ENUMDEFINITION 355

/**
 * ReadEventDetails
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_UInt32 numValuesPerNode;
    UA_DateTime startTime;
    UA_DateTime endTime;
    UA_EventFilter filter;
} UA_ReadEventDetails;

#define UA_TYPES_READEVENTDETAILS 356

/**
 * ReadProcessedDetails
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DateTime startTime;
    UA_DateTime endTime;
    UA_Double processingInterval;
    size_t aggregateTypeSize;
    UA_NodeId *aggregateType;
    UA_AggregateConfiguration aggregateConfiguration;
} UA_ReadProcessedDetails;

#define UA_TYPES_READPROCESSEDDETAILS 357

/**
 * ModificationInfo
 * ^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_DateTime modificationTime;
    UA_HistoryUpdateType updateType;
    UA_String userName;
} UA_ModificationInfo;

#define UA_TYPES_MODIFICATIONINFO 358

/**
 * HistoryModifiedData
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t dataValuesSize;
    UA_DataValue *dataValues;
    size_t modificationInfosSize;
    UA_ModificationInfo *modificationInfos;
} UA_HistoryModifiedData;

#define UA_TYPES_HISTORYMODIFIEDDATA 359

/**
 * HistoryEvent
 * ^^^^^^^^^^^^
 */
typedef struct {
    size_t eventsSize;
    UA_HistoryEventFieldList *events;
} UA_HistoryEvent;

#define UA_TYPES_HISTORYEVENT 360

/**
 * UpdateEventDetails
 * ^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId nodeId;
    UA_PerformUpdateType performInsertReplace;
    UA_EventFilter filter;
    size_t eventDataSize;
    UA_HistoryEventFieldList *eventData;
} UA_UpdateEventDetails;

#define UA_TYPES_UPDATEEVENTDETAILS 361

/**
 * DataChangeNotification
 * ^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t monitoredItemsSize;
    UA_MonitoredItemNotification *monitoredItems;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DataChangeNotification;

#define UA_TYPES_DATACHANGENOTIFICATION 362

/**
 * EventNotificationList
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t eventsSize;
    UA_EventFieldList *events;
} UA_EventNotificationList;

#define UA_TYPES_EVENTNOTIFICATIONLIST 363

/**
 * SessionDiagnosticsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId sessionId;
    UA_String sessionName;
    UA_ApplicationDescription clientDescription;
    UA_String serverUri;
    UA_String endpointUrl;
    size_t localeIdsSize;
    UA_String *localeIds;
    UA_Double actualSessionTimeout;
    UA_UInt32 maxResponseMessageSize;
    UA_DateTime clientConnectionTime;
    UA_DateTime clientLastContactTime;
    UA_UInt32 currentSubscriptionsCount;
    UA_UInt32 currentMonitoredItemsCount;
    UA_UInt32 currentPublishRequestsInQueue;
    UA_ServiceCounterDataType totalRequestCount;
    UA_UInt32 unauthorizedRequestCount;
    UA_ServiceCounterDataType readCount;
    UA_ServiceCounterDataType historyReadCount;
    UA_ServiceCounterDataType writeCount;
    UA_ServiceCounterDataType historyUpdateCount;
    UA_ServiceCounterDataType callCount;
    UA_ServiceCounterDataType createMonitoredItemsCount;
    UA_ServiceCounterDataType modifyMonitoredItemsCount;
    UA_ServiceCounterDataType setMonitoringModeCount;
    UA_ServiceCounterDataType setTriggeringCount;
    UA_ServiceCounterDataType deleteMonitoredItemsCount;
    UA_ServiceCounterDataType createSubscriptionCount;
    UA_ServiceCounterDataType modifySubscriptionCount;
    UA_ServiceCounterDataType setPublishingModeCount;
    UA_ServiceCounterDataType publishCount;
    UA_ServiceCounterDataType republishCount;
    UA_ServiceCounterDataType transferSubscriptionsCount;
    UA_ServiceCounterDataType deleteSubscriptionsCount;
    UA_ServiceCounterDataType addNodesCount;
    UA_ServiceCounterDataType addReferencesCount;
    UA_ServiceCounterDataType deleteNodesCount;
    UA_ServiceCounterDataType deleteReferencesCount;
    UA_ServiceCounterDataType browseCount;
    UA_ServiceCounterDataType browseNextCount;
    UA_ServiceCounterDataType translateBrowsePathsToNodeIdsCount;
    UA_ServiceCounterDataType queryFirstCount;
    UA_ServiceCounterDataType queryNextCount;
    UA_ServiceCounterDataType registerNodesCount;
    UA_ServiceCounterDataType unregisterNodesCount;
} UA_SessionDiagnosticsDataType;

#define UA_TYPES_SESSIONDIAGNOSTICSDATATYPE 364

/**
 * EnumDescription
 * ^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_NodeId dataTypeId;
    UA_QualifiedName name;
    UA_EnumDefinition enumDefinition;
    UA_Byte builtInType;
} UA_EnumDescription;

#define UA_TYPES_ENUMDESCRIPTION 365

/**
 * UABinaryFileDataType
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t namespacesSize;
    UA_String *namespaces;
    size_t structureDataTypesSize;
    UA_StructureDescription *structureDataTypes;
    size_t enumDataTypesSize;
    UA_EnumDescription *enumDataTypes;
    size_t simpleDataTypesSize;
    UA_SimpleTypeDescription *simpleDataTypes;
    UA_String schemaLocation;
    size_t fileHeaderSize;
    UA_KeyValuePair *fileHeader;
    UA_Variant body;
} UA_UABinaryFileDataType;

#define UA_TYPES_UABINARYFILEDATATYPE 366

/**
 * DataSetMetaDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t namespacesSize;
    UA_String *namespaces;
    size_t structureDataTypesSize;
    UA_StructureDescription *structureDataTypes;
    size_t enumDataTypesSize;
    UA_EnumDescription *enumDataTypes;
    size_t simpleDataTypesSize;
    UA_SimpleTypeDescription *simpleDataTypes;
    UA_String name;
    UA_LocalizedText description;
    size_t fieldsSize;
    UA_FieldMetaData *fields;
    UA_Guid dataSetClassId;
    UA_ConfigurationVersionDataType configurationVersion;
} UA_DataSetMetaDataType;

#define UA_TYPES_DATASETMETADATATYPE 367

/**
 * PublishedDataSetDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    size_t dataSetFolderSize;
    UA_String *dataSetFolder;
    UA_DataSetMetaDataType dataSetMetaData;
    size_t extensionFieldsSize;
    UA_KeyValuePair *extensionFields;
    UA_ExtensionObject dataSetSource;
} UA_PublishedDataSetDataType;

#define UA_TYPES_PUBLISHEDDATASETDATATYPE 368

/**
 * DataSetReaderDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_Boolean enabled;
    UA_Variant publisherId;
    UA_UInt16 writerGroupId;
    UA_UInt16 dataSetWriterId;
    UA_DataSetMetaDataType dataSetMetaData;
    UA_DataSetFieldContentMask dataSetFieldContentMask;
    UA_Double messageReceiveTimeout;
    UA_UInt32 keyFrameCount;
    UA_String headerLayoutUri;
    UA_MessageSecurityMode securityMode;
    UA_String securityGroupId;
    size_t securityKeyServicesSize;
    UA_EndpointDescription *securityKeyServices;
    size_t dataSetReaderPropertiesSize;
    UA_KeyValuePair *dataSetReaderProperties;
    UA_ExtensionObject transportSettings;
    UA_ExtensionObject messageSettings;
    UA_ExtensionObject subscribedDataSet;
} UA_DataSetReaderDataType;

#define UA_TYPES_DATASETREADERDATATYPE 369

/**
 * TargetVariablesDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t targetVariablesSize;
    UA_FieldTargetDataType *targetVariables;
} UA_TargetVariablesDataType;

#define UA_TYPES_TARGETVARIABLESDATATYPE 370

/**
 * DataTypeSchemaHeader
 * ^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t namespacesSize;
    UA_String *namespaces;
    size_t structureDataTypesSize;
    UA_StructureDescription *structureDataTypes;
    size_t enumDataTypesSize;
    UA_EnumDescription *enumDataTypes;
    size_t simpleDataTypesSize;
    UA_SimpleTypeDescription *simpleDataTypes;
} UA_DataTypeSchemaHeader;

#define UA_TYPES_DATATYPESCHEMAHEADER 371

/**
 * ReaderGroupDataType
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_Boolean enabled;
    UA_MessageSecurityMode securityMode;
    UA_String securityGroupId;
    size_t securityKeyServicesSize;
    UA_EndpointDescription *securityKeyServices;
    UA_UInt32 maxNetworkMessageSize;
    size_t groupPropertiesSize;
    UA_KeyValuePair *groupProperties;
    UA_ExtensionObject transportSettings;
    UA_ExtensionObject messageSettings;
    size_t dataSetReadersSize;
    UA_DataSetReaderDataType *dataSetReaders;
} UA_ReaderGroupDataType;

#define UA_TYPES_READERGROUPDATATYPE 372

/**
 * PubSubConnectionDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    UA_String name;
    UA_Boolean enabled;
    UA_Variant publisherId;
    UA_String transportProfileUri;
    UA_ExtensionObject address;
    size_t connectionPropertiesSize;
    UA_KeyValuePair *connectionProperties;
    UA_ExtensionObject transportSettings;
    size_t writerGroupsSize;
    UA_WriterGroupDataType *writerGroups;
    size_t readerGroupsSize;
    UA_ReaderGroupDataType *readerGroups;
} UA_PubSubConnectionDataType;

#define UA_TYPES_PUBSUBCONNECTIONDATATYPE 373

/**
 * PubSubConfigurationDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef struct {
    size_t publishedDataSetsSize;
    UA_PublishedDataSetDataType *publishedDataSets;
    size_t connectionsSize;
    UA_PubSubConnectionDataType *connections;
    UA_Boolean enabled;
} UA_PubSubConfigurationDataType;

#define UA_TYPES_PUBSUBCONFIGURATIONDATATYPE 374


_UA_END_DECLS

#endif /* TYPES_GENERATED_H_ */
