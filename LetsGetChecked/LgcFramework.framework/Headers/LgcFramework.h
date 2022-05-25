#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class LgcFrameworkApiResponseError, LgcFrameworkApiResponse<__covariant T>, LgcFrameworkKotlinThrowable, LgcFrameworkErrorResponse, LgcFrameworkKotlinNothing, LgcFrameworkApiResponseSuccess<__covariant T>, LgcFrameworkErrorResponseCompanion, LgcFrameworkKtorAccessTokenInfoCompanion, LgcFrameworkKtorAccessTokenInfo, LgcFrameworkKtorCountry, LgcFrameworkKtorCountriesResponseCompanion, LgcFrameworkKtorCountriesResponse, LgcFrameworkKtorCountryCompanion, LgcFrameworkKtor_client_coreHttpClient, LgcFrameworkNetworkRoute, LgcFrameworkKoin_coreKoin, LgcFrameworkKtorLoginResponseCompanion, LgcFrameworkKtorLoginResponse, LgcFrameworkKtorSessionCommandCompanion, LgcFrameworkKtorSessionCommand, LgcFrameworkKotlinArray<T>, LgcFrameworkKotlinException, LgcFrameworkKoin_coreModule, LgcFrameworkKtor_client_coreHttpClientConfig<T>, LgcFrameworkKotlinRuntimeException, LgcFrameworkKotlinIllegalStateException, LgcFrameworkKtor_client_coreHttpClientEngineConfig, LgcFrameworkKtor_eventsEvents, LgcFrameworkKtor_client_coreHttpReceivePipeline, LgcFrameworkKtor_client_coreHttpRequestPipeline, LgcFrameworkKtor_client_coreHttpResponsePipeline, LgcFrameworkKtor_client_coreHttpSendPipeline, LgcFrameworkKoin_coreScope, LgcFrameworkKoin_coreParametersHolder, LgcFrameworkKotlinLazyThreadSafetyMode, LgcFrameworkKoin_coreLogger, LgcFrameworkKoin_coreInstanceRegistry, LgcFrameworkKoin_corePropertyRegistry, LgcFrameworkKoin_coreScopeRegistry, LgcFrameworkKoin_coreInstanceFactory<T>, LgcFrameworkKotlinPair<__covariant A, __covariant B>, LgcFrameworkKoin_coreScopeDSL, LgcFrameworkKoin_coreSingleInstanceFactory<T>, LgcFrameworkKotlinx_serialization_coreSerializersModule, LgcFrameworkKotlinx_serialization_coreSerialKind, LgcFrameworkKtor_client_coreHttpRequestData, LgcFrameworkKtor_client_coreHttpResponseData, LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher, LgcFrameworkKtor_client_coreProxyConfig, LgcFrameworkKtor_utilsAttributeKey<T>, LgcFrameworkKtor_eventsEventDefinition<T>, LgcFrameworkKtor_utilsPipelinePhase, LgcFrameworkKtor_utilsPipeline<TSubject, TContext>, LgcFrameworkKtor_client_coreHttpReceivePipelinePhases, LgcFrameworkKtor_client_coreHttpResponse, LgcFrameworkKotlinUnit, LgcFrameworkKtor_client_coreHttpRequestPipelinePhases, LgcFrameworkKtor_client_coreHttpRequestBuilder, LgcFrameworkKtor_client_coreHttpResponsePipelinePhases, LgcFrameworkKtor_client_coreHttpResponseContainer, LgcFrameworkKtor_client_coreHttpClientCall, LgcFrameworkKtor_client_coreHttpSendPipelinePhases, LgcFrameworkKoin_coreLockable, LgcFrameworkKoin_coreParametersHolderCompanion, LgcFrameworkKotlinEnumCompanion, LgcFrameworkKotlinEnum<E>, LgcFrameworkKoin_coreLevel, LgcFrameworkKoin_coreScopeRegistryCompanion, LgcFrameworkKoin_coreBeanDefinition<T>, LgcFrameworkKoin_coreInstanceFactoryCompanion, LgcFrameworkKoin_coreInstanceContext, LgcFrameworkKtor_httpUrl, LgcFrameworkKtor_httpHttpMethod, LgcFrameworkKtor_httpOutgoingContent, LgcFrameworkKtor_httpHttpStatusCode, LgcFrameworkKtor_utilsGMTDate, LgcFrameworkKtor_httpHttpProtocolVersion, LgcFrameworkKotlinAbstractCoroutineContextElement, LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcherKey, LgcFrameworkKtor_httpHeadersBuilder, LgcFrameworkKtor_client_coreHttpRequestBuilderCompanion, LgcFrameworkKtor_httpURLBuilder, LgcFrameworkKtor_utilsTypeInfo, LgcFrameworkKtor_client_coreHttpClientCallCompanion, LgcFrameworkKoin_coreKind, LgcFrameworkKoin_coreCallbacks<T>, LgcFrameworkKtor_httpUrlCompanion, LgcFrameworkKtor_httpURLProtocol, LgcFrameworkKtor_httpHttpMethodCompanion, LgcFrameworkKtor_httpContentType, LgcFrameworkKotlinCancellationException, LgcFrameworkKtor_httpHttpStatusCodeCompanion, LgcFrameworkKtor_utilsGMTDateCompanion, LgcFrameworkKtor_utilsWeekDay, LgcFrameworkKtor_utilsMonth, LgcFrameworkKtor_httpHttpProtocolVersionCompanion, LgcFrameworkKotlinAbstractCoroutineContextKey<B, E>, LgcFrameworkKtor_ioMemory, LgcFrameworkKtor_ioChunkBuffer, LgcFrameworkKotlinByteArray, LgcFrameworkKtor_ioBuffer, LgcFrameworkKtor_ioByteReadPacket, LgcFrameworkKtor_utilsStringValuesBuilderImpl, LgcFrameworkKtor_httpURLBuilderCompanion, LgcFrameworkKtor_httpURLProtocolCompanion, LgcFrameworkKtor_httpHeaderValueParam, LgcFrameworkKtor_httpHeaderValueWithParametersCompanion, LgcFrameworkKtor_httpHeaderValueWithParameters, LgcFrameworkKtor_httpContentTypeCompanion, LgcFrameworkKtor_utilsWeekDayCompanion, LgcFrameworkKtor_utilsMonthCompanion, LgcFrameworkKtor_ioMemoryCompanion, LgcFrameworkKtor_ioBufferCompanion, LgcFrameworkKtor_ioChunkBufferCompanion, LgcFrameworkKotlinByteIterator, LgcFrameworkKtor_ioInputCompanion, LgcFrameworkKtor_ioInput, LgcFrameworkKtor_ioByteReadPacketCompanion, LgcFrameworkKotlinKTypeProjection, LgcFrameworkKotlinx_coroutines_coreAtomicDesc, LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, LgcFrameworkKotlinKVariance, LgcFrameworkKotlinKTypeProjectionCompanion, LgcFrameworkKotlinx_coroutines_coreAtomicOp<__contravariant T>, LgcFrameworkKotlinx_coroutines_coreOpDescriptor, LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode, LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol LgcFrameworkKotlinx_serialization_coreKSerializer, LgcFrameworkKoin_coreKoinComponent, LgcFrameworkClientVersion, LgcFrameworkApplicationToken, LgcFrameworkKotlinx_serialization_coreEncoder, LgcFrameworkKotlinx_serialization_coreSerialDescriptor, LgcFrameworkKotlinx_serialization_coreSerializationStrategy, LgcFrameworkKotlinx_serialization_coreDecoder, LgcFrameworkKotlinx_serialization_coreDeserializationStrategy, LgcFrameworkKotlinCoroutineContext, LgcFrameworkKotlinx_coroutines_coreCoroutineScope, LgcFrameworkKtor_ioCloseable, LgcFrameworkKtor_client_coreHttpClientEngine, LgcFrameworkKtor_client_coreHttpClientEngineCapability, LgcFrameworkKtor_utilsAttributes, LgcFrameworkKoin_coreKoinScopeComponent, LgcFrameworkKoin_coreQualifier, LgcFrameworkKotlinKClass, LgcFrameworkKotlinLazy, LgcFrameworkKotlinIterator, LgcFrameworkKtor_client_coreHttpClientPlugin, LgcFrameworkKotlinx_serialization_coreCompositeEncoder, LgcFrameworkKotlinAnnotation, LgcFrameworkKotlinx_serialization_coreCompositeDecoder, LgcFrameworkKotlinCoroutineContextElement, LgcFrameworkKotlinCoroutineContextKey, LgcFrameworkKotlinx_coroutines_coreDisposableHandle, LgcFrameworkKotlinSuspendFunction2, LgcFrameworkKoin_coreScopeCallback, LgcFrameworkKotlinKDeclarationContainer, LgcFrameworkKotlinKAnnotatedElement, LgcFrameworkKotlinKClassifier, LgcFrameworkKotlinComparable, LgcFrameworkKotlinx_serialization_coreSerializersModuleCollector, LgcFrameworkKtor_httpHeaders, LgcFrameworkKotlinx_coroutines_coreJob, LgcFrameworkKotlinContinuation, LgcFrameworkKotlinContinuationInterceptor, LgcFrameworkKotlinx_coroutines_coreRunnable, LgcFrameworkKotlinFunction, LgcFrameworkKtor_httpHttpMessage, LgcFrameworkKtor_ioByteReadChannel, LgcFrameworkKtor_httpHttpMessageBuilder, LgcFrameworkKtor_client_coreHttpRequest, LgcFrameworkKtor_httpParameters, LgcFrameworkKotlinMapEntry, LgcFrameworkKtor_utilsStringValues, LgcFrameworkKotlinx_coroutines_coreChildHandle, LgcFrameworkKotlinx_coroutines_coreChildJob, LgcFrameworkKotlinSequence, LgcFrameworkKotlinx_coroutines_coreSelectClause0, LgcFrameworkKtor_ioReadSession, LgcFrameworkKotlinSuspendFunction1, LgcFrameworkKotlinAppendable, LgcFrameworkKtor_utilsStringValuesBuilder, LgcFrameworkKtor_httpParametersBuilder, LgcFrameworkKotlinKType, LgcFrameworkKotlinx_coroutines_coreParentJob, LgcFrameworkKotlinx_coroutines_coreSelectInstance, LgcFrameworkKotlinSuspendFunction0, LgcFrameworkKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface LgcFrameworkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface LgcFrameworkBase (LgcFrameworkBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface LgcFrameworkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface LgcFrameworkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorLgcFrameworkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface LgcFrameworkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface LgcFrameworkByte : LgcFrameworkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface LgcFrameworkUByte : LgcFrameworkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface LgcFrameworkShort : LgcFrameworkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface LgcFrameworkUShort : LgcFrameworkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface LgcFrameworkInt : LgcFrameworkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface LgcFrameworkUInt : LgcFrameworkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface LgcFrameworkLong : LgcFrameworkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface LgcFrameworkULong : LgcFrameworkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface LgcFrameworkFloat : LgcFrameworkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface LgcFrameworkDouble : LgcFrameworkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface LgcFrameworkBoolean : LgcFrameworkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("ApiResponse")))
@interface LgcFrameworkApiResponse<__covariant T> : LgcFrameworkBase
- (void)handleResultOnSuccess:(void (^ _Nullable)(T _Nullable))onSuccess onError:(void (^ _Nullable)(LgcFrameworkApiResponseError *))onError __attribute__((swift_name("handleResult(onSuccess:onError:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseError")))
@interface LgcFrameworkApiResponseError : LgcFrameworkApiResponse<LgcFrameworkKotlinNothing *>
- (instancetype)initWithException:(LgcFrameworkKotlinThrowable * _Nullable)exception responseCode:(int32_t)responseCode errorResponse:(LgcFrameworkErrorResponse * _Nullable)errorResponse __attribute__((swift_name("init(exception:responseCode:errorResponse:)"))) __attribute__((objc_designated_initializer));
- (LgcFrameworkKotlinThrowable * _Nullable)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkErrorResponse * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LgcFrameworkApiResponseError *)doCopyException:(LgcFrameworkKotlinThrowable * _Nullable)exception responseCode:(int32_t)responseCode errorResponse:(LgcFrameworkErrorResponse * _Nullable)errorResponse __attribute__((swift_name("doCopy(exception:responseCode:errorResponse:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkErrorResponse * _Nullable errorResponse __attribute__((swift_name("errorResponse")));
@property (readonly) LgcFrameworkKotlinThrowable * _Nullable exception __attribute__((swift_name("exception")));
@property (readonly) int32_t responseCode __attribute__((swift_name("responseCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseSuccess")))
@interface LgcFrameworkApiResponseSuccess<__covariant T> : LgcFrameworkApiResponse<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkApiResponseSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("ApplicationToken")))
@protocol LgcFrameworkApplicationToken
@required
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@end;

__attribute__((swift_name("ClientVersion")))
@protocol LgcFrameworkClientVersion
@required
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface LgcFrameworkErrorResponse : LgcFrameworkBase
- (instancetype)initWithErrorCode:(int32_t)errorCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkErrorResponse *)doCopyErrorCode:(int32_t)errorCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("doCopy(errorCode:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.Companion")))
@interface LgcFrameworkErrorResponseCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorAccessTokenInfo")))
@interface LgcFrameworkKtorAccessTokenInfo : LgcFrameworkBase
- (instancetype)initWithAccessToken:(NSString * _Nullable)accessToken refreshToken:(NSString * _Nullable)refreshToken lastRefreshDateTime:(NSString * _Nullable)lastRefreshDateTime __attribute__((swift_name("init(accessToken:refreshToken:lastRefreshDateTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtorAccessTokenInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LgcFrameworkKtorAccessTokenInfo *)doCopyAccessToken:(NSString * _Nullable)accessToken refreshToken:(NSString * _Nullable)refreshToken lastRefreshDateTime:(NSString * _Nullable)lastRefreshDateTime __attribute__((swift_name("doCopy(accessToken:refreshToken:lastRefreshDateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString * _Nullable lastRefreshDateTime __attribute__((swift_name("lastRefreshDateTime")));
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorAccessTokenInfo.Companion")))
@interface LgcFrameworkKtorAccessTokenInfoCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtorAccessTokenInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorCountriesResponse")))
@interface LgcFrameworkKtorCountriesResponse : LgcFrameworkBase
- (instancetype)initWithItems:(NSArray<LgcFrameworkKtorCountry *> * _Nullable)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtorCountriesResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<LgcFrameworkKtorCountry *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkKtorCountriesResponse *)doCopyItems:(NSArray<LgcFrameworkKtorCountry *> * _Nullable)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<LgcFrameworkKtorCountry *> * _Nullable items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorCountriesResponse.Companion")))
@interface LgcFrameworkKtorCountriesResponseCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtorCountriesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorCountry")))
@interface LgcFrameworkKtorCountry : LgcFrameworkBase
- (instancetype)initWithId:(NSString * _Nullable)id isCurrentCountry:(LgcFrameworkBoolean * _Nullable)isCurrentCountry isoAlpha2Code:(NSString * _Nullable)isoAlpha2Code name:(NSString * _Nullable)name phonePrefix:(NSString * _Nullable)phonePrefix usesPerAreaShipping:(LgcFrameworkBoolean * _Nullable)usesPerAreaShipping __attribute__((swift_name("init(id:isCurrentCountry:isoAlpha2Code:name:phonePrefix:usesPerAreaShipping:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtorCountryCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LgcFrameworkBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LgcFrameworkKtorCountry *)doCopyId:(NSString * _Nullable)id isCurrentCountry:(LgcFrameworkBoolean * _Nullable)isCurrentCountry isoAlpha2Code:(NSString * _Nullable)isoAlpha2Code name:(NSString * _Nullable)name phonePrefix:(NSString * _Nullable)phonePrefix usesPerAreaShipping:(LgcFrameworkBoolean * _Nullable)usesPerAreaShipping __attribute__((swift_name("doCopy(id:isCurrentCountry:isoAlpha2Code:name:phonePrefix:usesPerAreaShipping:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) LgcFrameworkBoolean * _Nullable isCurrentCountry __attribute__((swift_name("isCurrentCountry")));
@property NSString * _Nullable isoAlpha2Code __attribute__((swift_name("isoAlpha2Code")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable phonePrefix __attribute__((swift_name("phonePrefix")));
@property (readonly) LgcFrameworkBoolean * _Nullable usesPerAreaShipping __attribute__((swift_name("usesPerAreaShipping")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorCountry.Companion")))
@interface LgcFrameworkKtorCountryCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtorCountryCompanion *shared __attribute__((swift_name("shared")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("NetworkRoute")))
@interface LgcFrameworkNetworkRoute : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)apiCallUrlString:(NSString *)urlString httpClient:(LgcFrameworkKtor_client_coreHttpClient *)httpClient completionHandler:(void (^)(LgcFrameworkApiResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("apiCall(urlString:httpClient:completionHandler:)")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol LgcFrameworkKoin_coreKoinComponent
@required
- (LgcFrameworkKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorCountryApi")))
@interface LgcFrameworkKtorCountryApi : LgcFrameworkNetworkRoute <LgcFrameworkKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCountryWithCompletionHandler:(void (^)(LgcFrameworkApiResponse<LgcFrameworkKtorCountriesResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCountry(completionHandler:)")));
- (NSArray<LgcFrameworkKtorCountry *> *)sortByNameItems:(NSArray<LgcFrameworkKtorCountry *> *)items __attribute__((swift_name("sortByName(items:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorLoginResponse")))
@interface LgcFrameworkKtorLoginResponse : LgcFrameworkBase
- (instancetype)initWithAccessToken:(LgcFrameworkKtorAccessTokenInfo * _Nullable)accessToken __attribute__((swift_name("init(accessToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtorLoginResponseCompanion *companion __attribute__((swift_name("companion")));
- (LgcFrameworkKtorAccessTokenInfo * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkKtorLoginResponse *)doCopyAccessToken:(LgcFrameworkKtorAccessTokenInfo * _Nullable)accessToken __attribute__((swift_name("doCopy(accessToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKtorAccessTokenInfo * _Nullable accessToken __attribute__((swift_name("accessToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorLoginResponse.Companion")))
@interface LgcFrameworkKtorLoginResponseCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtorLoginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorSessionCommand")))
@interface LgcFrameworkKtorSessionCommand : LgcFrameworkBase
- (instancetype)initWithRefreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("init(refreshToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtorSessionCommandCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkKtorSessionCommand *)doCopyRefreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("doCopy(refreshToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorSessionCommand.Companion")))
@interface LgcFrameworkKtorSessionCommandCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtorSessionCommandCompanion *shared __attribute__((swift_name("shared")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface LgcFrameworkKotlinThrowable : LgcFrameworkBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (LgcFrameworkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface LgcFrameworkKotlinException : LgcFrameworkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LgcException")))
@interface LgcFrameworkLgcException : LgcFrameworkKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message statusCode:(int32_t)statusCode errorResponse:(LgcFrameworkErrorResponse *)errorResponse __attribute__((swift_name("init(message:statusCode:errorResponse:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property LgcFrameworkErrorResponse *errorResponse __attribute__((swift_name("errorResponse")));
@property int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface LgcFrameworkPlatform : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *versionCode __attribute__((swift_name("versionCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface LgcFrameworkKoinKt : LgcFrameworkBase
@property (class, readonly) LgcFrameworkKoin_coreModule *ktorModule __attribute__((swift_name("ktorModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface LgcFrameworkPlatformKt : LgcFrameworkBase
@property (class) id<LgcFrameworkClientVersion> provider __attribute__((swift_name("provider")));
@property (class) id<LgcFrameworkApplicationToken> tokenProvider __attribute__((swift_name("tokenProvider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientKt")))
@interface LgcFrameworkHttpClientKt : LgcFrameworkBase
+ (LgcFrameworkKtor_client_coreHttpClient *)httpClientConfig:(void (^)(LgcFrameworkKtor_client_coreHttpClientConfig<id> *))config __attribute__((swift_name("httpClient(config:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface LgcFrameworkKotlinNothing : LgcFrameworkBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol LgcFrameworkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<LgcFrameworkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol LgcFrameworkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<LgcFrameworkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol LgcFrameworkKotlinx_serialization_coreKSerializer <LgcFrameworkKotlinx_serialization_coreSerializationStrategy, LgcFrameworkKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface LgcFrameworkKotlinRuntimeException : LgcFrameworkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface LgcFrameworkKotlinIllegalStateException : LgcFrameworkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface LgcFrameworkKotlinCancellationException : LgcFrameworkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol LgcFrameworkKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<LgcFrameworkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol LgcFrameworkKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface LgcFrameworkKtor_client_coreHttpClient : LgcFrameworkBase <LgcFrameworkKotlinx_coroutines_coreCoroutineScope, LgcFrameworkKtor_ioCloseable>
- (instancetype)initWithEngine:(id<LgcFrameworkKtor_client_coreHttpClientEngine>)engine userConfig:(LgcFrameworkKtor_client_coreHttpClientConfig<LgcFrameworkKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (LgcFrameworkKtor_client_coreHttpClient *)configBlock:(void (^)(LgcFrameworkKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<LgcFrameworkKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LgcFrameworkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<LgcFrameworkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<LgcFrameworkKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) LgcFrameworkKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) LgcFrameworkKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) LgcFrameworkKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) LgcFrameworkKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) LgcFrameworkKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) LgcFrameworkKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface LgcFrameworkKoin_coreKoin : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (LgcFrameworkKoin_coreScope *)createScopeT:(id<LgcFrameworkKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (LgcFrameworkKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (LgcFrameworkKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (LgcFrameworkKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<LgcFrameworkKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<LgcFrameworkKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<LgcFrameworkKotlinKClass>)clazz qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (LgcFrameworkKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (LgcFrameworkKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<LgcFrameworkKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<LgcFrameworkKotlinKClass>)clazz qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (LgcFrameworkKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (LgcFrameworkKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<LgcFrameworkKotlinLazy>)injectQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier mode:(LgcFrameworkKotlinLazyThreadSafetyMode *)mode parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<LgcFrameworkKotlinLazy>)injectOrNullQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier mode:(LgcFrameworkKotlinLazyThreadSafetyMode *)mode parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<LgcFrameworkKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(LgcFrameworkKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<LgcFrameworkKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) LgcFrameworkKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) LgcFrameworkKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) LgcFrameworkKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) LgcFrameworkKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface LgcFrameworkKotlinArray<T> : LgcFrameworkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(LgcFrameworkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<LgcFrameworkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface LgcFrameworkKoin_coreModule : LgcFrameworkBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (LgcFrameworkKotlinPair<LgcFrameworkKoin_coreModule *, LgcFrameworkKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(LgcFrameworkKotlinArray<LgcFrameworkKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<LgcFrameworkKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<LgcFrameworkKoin_coreModule *> *)plusModules:(NSArray<LgcFrameworkKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<LgcFrameworkKoin_coreModule *> *)plusModule:(LgcFrameworkKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<LgcFrameworkKoin_coreQualifier>)qualifier scopeSet:(void (^)(LgcFrameworkKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(LgcFrameworkKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (LgcFrameworkKotlinPair<LgcFrameworkKoin_coreModule *, LgcFrameworkKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) LgcFrameworkMutableSet<LgcFrameworkKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface LgcFrameworkKtor_client_coreHttpClientConfig<T> : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LgcFrameworkKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(LgcFrameworkKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<LgcFrameworkKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(LgcFrameworkKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(LgcFrameworkKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol LgcFrameworkKotlinx_serialization_coreEncoder
@required
- (id<LgcFrameworkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<LgcFrameworkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<LgcFrameworkKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<LgcFrameworkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<LgcFrameworkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) LgcFrameworkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol LgcFrameworkKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<LgcFrameworkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<LgcFrameworkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) LgcFrameworkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol LgcFrameworkKotlinx_serialization_coreDecoder
@required
- (id<LgcFrameworkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<LgcFrameworkKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (LgcFrameworkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) LgcFrameworkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol LgcFrameworkKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<LgcFrameworkKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<LgcFrameworkKotlinCoroutineContextElement> _Nullable)getKey:(id<LgcFrameworkKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<LgcFrameworkKotlinCoroutineContext>)minusKeyKey:(id<LgcFrameworkKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<LgcFrameworkKotlinCoroutineContext>)plusContext:(id<LgcFrameworkKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol LgcFrameworkKtor_client_coreHttpClientEngine <LgcFrameworkKotlinx_coroutines_coreCoroutineScope, LgcFrameworkKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(LgcFrameworkKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(LgcFrameworkKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(LgcFrameworkKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) LgcFrameworkKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<LgcFrameworkKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface LgcFrameworkKtor_client_coreHttpClientEngineConfig : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property LgcFrameworkKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol LgcFrameworkKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol LgcFrameworkKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<LgcFrameworkKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface LgcFrameworkKtor_eventsEvents : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(LgcFrameworkKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<LgcFrameworkKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(LgcFrameworkKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(LgcFrameworkKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface LgcFrameworkKtor_utilsPipeline<TSubject, TContext> : LgcFrameworkBase
- (instancetype)initWithPhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LgcFrameworkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(LgcFrameworkKtor_utilsPipelinePhase *)reference phase:(LgcFrameworkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(LgcFrameworkKtor_utilsPipelinePhase *)reference phase:(LgcFrameworkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase block:(id<LgcFrameworkKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<LgcFrameworkKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(LgcFrameworkKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(LgcFrameworkKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(LgcFrameworkKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<LgcFrameworkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<LgcFrameworkKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface LgcFrameworkKtor_client_coreHttpReceivePipeline : LgcFrameworkKtor_utilsPipeline<LgcFrameworkKtor_client_coreHttpResponse *, LgcFrameworkKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LgcFrameworkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface LgcFrameworkKtor_client_coreHttpRequestPipeline : LgcFrameworkKtor_utilsPipeline<id, LgcFrameworkKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LgcFrameworkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface LgcFrameworkKtor_client_coreHttpResponsePipeline : LgcFrameworkKtor_utilsPipeline<LgcFrameworkKtor_client_coreHttpResponseContainer *, LgcFrameworkKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LgcFrameworkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface LgcFrameworkKtor_client_coreHttpSendPipeline : LgcFrameworkKtor_utilsPipeline<id, LgcFrameworkKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(LgcFrameworkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LgcFrameworkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Koin_coreLockable")))
@interface LgcFrameworkKoin_coreLockable : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface LgcFrameworkKoin_coreScope : LgcFrameworkKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<LgcFrameworkKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(LgcFrameworkKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (id<LgcFrameworkKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (LgcFrameworkKoin_coreScope *)doCopyScopeQualifier:(id<LgcFrameworkKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(LgcFrameworkKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<LgcFrameworkKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<LgcFrameworkKotlinKClass>)clazz qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<LgcFrameworkKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (LgcFrameworkKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<LgcFrameworkKotlinKClass>)clazz qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (LgcFrameworkKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<LgcFrameworkKotlinLazy>)injectQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier mode:(LgcFrameworkKotlinLazyThreadSafetyMode *)mode parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<LgcFrameworkKotlinLazy>)injectOrNullQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier mode:(LgcFrameworkKotlinLazyThreadSafetyMode *)mode parameters:(LgcFrameworkKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(LgcFrameworkKotlinArray<LgcFrameworkKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<LgcFrameworkKotlinKClass>)clazz qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<LgcFrameworkKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(LgcFrameworkKotlinArray<LgcFrameworkKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<LgcFrameworkKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) LgcFrameworkKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<LgcFrameworkKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol LgcFrameworkKoin_coreKoinScopeComponent <LgcFrameworkKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) LgcFrameworkKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol LgcFrameworkKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol LgcFrameworkKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol LgcFrameworkKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol LgcFrameworkKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol LgcFrameworkKotlinKClass <LgcFrameworkKotlinKDeclarationContainer, LgcFrameworkKotlinKAnnotatedElement, LgcFrameworkKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface LgcFrameworkKoin_coreParametersHolder : LgcFrameworkBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (LgcFrameworkKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<LgcFrameworkKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<LgcFrameworkKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (LgcFrameworkKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol LgcFrameworkKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol LgcFrameworkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface LgcFrameworkKotlinEnum<E> : LgcFrameworkBase <LgcFrameworkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface LgcFrameworkKotlinLazyThreadSafetyMode : LgcFrameworkKotlinEnum<LgcFrameworkKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LgcFrameworkKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) LgcFrameworkKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) LgcFrameworkKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (LgcFrameworkKotlinArray<LgcFrameworkKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface LgcFrameworkKoin_coreLogger : LgcFrameworkBase
- (instancetype)initWithLevel:(LgcFrameworkKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(LgcFrameworkKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(LgcFrameworkKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(LgcFrameworkKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property LgcFrameworkKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface LgcFrameworkKoin_coreInstanceRegistry : LgcFrameworkBase
- (instancetype)initWith_koin:(LgcFrameworkKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(LgcFrameworkKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) LgcFrameworkKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, LgcFrameworkKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface LgcFrameworkKoin_corePropertyRegistry : LgcFrameworkBase
- (instancetype)initWith_koin:(LgcFrameworkKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface LgcFrameworkKoin_coreScopeRegistry : LgcFrameworkBase
- (instancetype)initWith_koin:(LgcFrameworkKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<LgcFrameworkKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) LgcFrameworkKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<LgcFrameworkKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol LgcFrameworkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface LgcFrameworkKoin_coreInstanceFactory<T> : LgcFrameworkKoin_coreLockable
- (instancetype)initWithBeanDefinition:(LgcFrameworkKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(LgcFrameworkKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(LgcFrameworkKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(LgcFrameworkKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(LgcFrameworkKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) LgcFrameworkKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface LgcFrameworkKotlinPair<__covariant A, __covariant B> : LgcFrameworkBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface LgcFrameworkKoin_coreScopeDSL : LgcFrameworkBase
- (instancetype)initWithScopeQualifier:(id<LgcFrameworkKoin_coreQualifier>)scopeQualifier module:(LgcFrameworkKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (LgcFrameworkKotlinPair<LgcFrameworkKoin_coreModule *, LgcFrameworkKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (LgcFrameworkKotlinPair<LgcFrameworkKoin_coreModule *, LgcFrameworkKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (LgcFrameworkKotlinPair<LgcFrameworkKoin_coreModule *, LgcFrameworkKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) LgcFrameworkKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<LgcFrameworkKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface LgcFrameworkKoin_coreSingleInstanceFactory<T> : LgcFrameworkKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(LgcFrameworkKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(LgcFrameworkKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(LgcFrameworkKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(LgcFrameworkKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(LgcFrameworkKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol LgcFrameworkKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(LgcFrameworkKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) LgcFrameworkKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol LgcFrameworkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<LgcFrameworkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LgcFrameworkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LgcFrameworkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) LgcFrameworkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface LgcFrameworkKotlinx_serialization_coreSerializersModule : LgcFrameworkBase
- (void)dumpToCollector:(id<LgcFrameworkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<LgcFrameworkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<LgcFrameworkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<LgcFrameworkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<LgcFrameworkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LgcFrameworkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LgcFrameworkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol LgcFrameworkKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface LgcFrameworkKotlinx_serialization_coreSerialKind : LgcFrameworkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol LgcFrameworkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<LgcFrameworkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<LgcFrameworkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) LgcFrameworkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol LgcFrameworkKotlinCoroutineContextElement <LgcFrameworkKotlinCoroutineContext>
@required
@property (readonly) id<LgcFrameworkKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol LgcFrameworkKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface LgcFrameworkKtor_client_coreHttpRequestData : LgcFrameworkBase
- (instancetype)initWithUrl:(LgcFrameworkKtor_httpUrl *)url method:(LgcFrameworkKtor_httpHttpMethod *)method headers:(id<LgcFrameworkKtor_httpHeaders>)headers body:(LgcFrameworkKtor_httpOutgoingContent *)body executionContext:(id<LgcFrameworkKotlinx_coroutines_coreJob>)executionContext attributes:(id<LgcFrameworkKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<LgcFrameworkKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LgcFrameworkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LgcFrameworkKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<LgcFrameworkKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<LgcFrameworkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LgcFrameworkKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface LgcFrameworkKtor_client_coreHttpResponseData : LgcFrameworkBase
- (instancetype)initWithStatusCode:(LgcFrameworkKtor_httpHttpStatusCode *)statusCode requestTime:(LgcFrameworkKtor_utilsGMTDate *)requestTime headers:(id<LgcFrameworkKtor_httpHeaders>)headers version:(LgcFrameworkKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<LgcFrameworkKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<LgcFrameworkKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<LgcFrameworkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LgcFrameworkKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) LgcFrameworkKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface LgcFrameworkKotlinAbstractCoroutineContextElement : LgcFrameworkBase <LgcFrameworkKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<LgcFrameworkKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<LgcFrameworkKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol LgcFrameworkKotlinContinuationInterceptor <LgcFrameworkKotlinCoroutineContextElement>
@required
- (id<LgcFrameworkKotlinContinuation>)interceptContinuationContinuation:(id<LgcFrameworkKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<LgcFrameworkKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher : LgcFrameworkKotlinAbstractCoroutineContextElement <LgcFrameworkKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<LgcFrameworkKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<LgcFrameworkKotlinCoroutineContext>)context block:(id<LgcFrameworkKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<LgcFrameworkKotlinCoroutineContext>)context block:(id<LgcFrameworkKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<LgcFrameworkKotlinContinuation>)interceptContinuationContinuation:(id<LgcFrameworkKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<LgcFrameworkKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<LgcFrameworkKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface LgcFrameworkKtor_client_coreProxyConfig : LgcFrameworkBase
- (instancetype)initWithUrl:(LgcFrameworkKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface LgcFrameworkKtor_utilsAttributeKey<T> : LgcFrameworkBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface LgcFrameworkKtor_eventsEventDefinition<T> : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol LgcFrameworkKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface LgcFrameworkKtor_utilsPipelinePhase : LgcFrameworkBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol LgcFrameworkKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol LgcFrameworkKotlinSuspendFunction2 <LgcFrameworkKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface LgcFrameworkKtor_client_coreHttpReceivePipelinePhases : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol LgcFrameworkKtor_httpHttpMessage
@required
@property (readonly) id<LgcFrameworkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface LgcFrameworkKtor_client_coreHttpResponse : LgcFrameworkBase <LgcFrameworkKtor_httpHttpMessage, LgcFrameworkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<LgcFrameworkKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) LgcFrameworkKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) LgcFrameworkKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface LgcFrameworkKotlinUnit : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface LgcFrameworkKtor_client_coreHttpRequestPipelinePhases : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol LgcFrameworkKtor_httpHttpMessageBuilder
@required
@property (readonly) LgcFrameworkKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface LgcFrameworkKtor_client_coreHttpRequestBuilder : LgcFrameworkBase <LgcFrameworkKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) LgcFrameworkKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (LgcFrameworkKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<LgcFrameworkKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<LgcFrameworkKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<LgcFrameworkKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (LgcFrameworkKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(LgcFrameworkKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (LgcFrameworkKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(LgcFrameworkKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(LgcFrameworkKtor_httpURLBuilder *, LgcFrameworkKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<LgcFrameworkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property LgcFrameworkKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<LgcFrameworkKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) LgcFrameworkKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property LgcFrameworkKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LgcFrameworkKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface LgcFrameworkKtor_client_coreHttpResponsePipelinePhases : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface LgcFrameworkKtor_client_coreHttpResponseContainer : LgcFrameworkBase
- (instancetype)initWithExpectedType:(LgcFrameworkKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (LgcFrameworkKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(LgcFrameworkKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface LgcFrameworkKtor_client_coreHttpClientCall : LgcFrameworkBase <LgcFrameworkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(LgcFrameworkKtor_client_coreHttpClient *)client requestData:(LgcFrameworkKtor_client_coreHttpRequestData *)requestData responseData:(LgcFrameworkKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(LgcFrameworkKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(LgcFrameworkKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<LgcFrameworkKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<LgcFrameworkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LgcFrameworkKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<LgcFrameworkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<LgcFrameworkKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property LgcFrameworkKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface LgcFrameworkKtor_client_coreHttpSendPipelinePhases : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) LgcFrameworkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol LgcFrameworkKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(LgcFrameworkKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface LgcFrameworkKoin_coreParametersHolderCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface LgcFrameworkKotlinEnumCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface LgcFrameworkKoin_coreLevel : LgcFrameworkKotlinEnum<LgcFrameworkKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LgcFrameworkKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) LgcFrameworkKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) LgcFrameworkKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) LgcFrameworkKoin_coreLevel *none __attribute__((swift_name("none")));
+ (LgcFrameworkKotlinArray<LgcFrameworkKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface LgcFrameworkKoin_coreScopeRegistryCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface LgcFrameworkKoin_coreBeanDefinition<T> : LgcFrameworkBase
- (instancetype)initWithScopeQualifier:(id<LgcFrameworkKoin_coreQualifier>)scopeQualifier primaryType:(id<LgcFrameworkKotlinKClass>)primaryType qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition kind:(LgcFrameworkKoin_coreKind *)kind secondaryTypes:(NSArray<id<LgcFrameworkKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<LgcFrameworkKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<LgcFrameworkKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<LgcFrameworkKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (LgcFrameworkKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<LgcFrameworkKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (LgcFrameworkKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<LgcFrameworkKoin_coreQualifier>)scopeQualifier primaryType:(id<LgcFrameworkKotlinKClass>)primaryType qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *))definition kind:(LgcFrameworkKoin_coreKind *)kind secondaryTypes:(NSArray<id<LgcFrameworkKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<LgcFrameworkKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<LgcFrameworkKotlinKClass>)clazz qualifier:(id<LgcFrameworkKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<LgcFrameworkKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property LgcFrameworkKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(LgcFrameworkKoin_coreScope *, LgcFrameworkKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) LgcFrameworkKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<LgcFrameworkKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<LgcFrameworkKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<LgcFrameworkKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<LgcFrameworkKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface LgcFrameworkKoin_coreInstanceFactoryCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface LgcFrameworkKoin_coreInstanceContext : LgcFrameworkBase
- (instancetype)initWithKoin:(LgcFrameworkKoin_coreKoin *)koin scope:(LgcFrameworkKoin_coreScope *)scope parameters:(LgcFrameworkKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) LgcFrameworkKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) LgcFrameworkKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) LgcFrameworkKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol LgcFrameworkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<LgcFrameworkKotlinKClass>)kClass provider:(id<LgcFrameworkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<LgcFrameworkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<LgcFrameworkKotlinKClass>)kClass serializer:(id<LgcFrameworkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<LgcFrameworkKotlinKClass>)baseClass actualClass:(id<LgcFrameworkKotlinKClass>)actualClass actualSerializer:(id<LgcFrameworkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<LgcFrameworkKotlinKClass>)baseClass defaultDeserializerProvider:(id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<LgcFrameworkKotlinKClass>)baseClass defaultDeserializerProvider:(id<LgcFrameworkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<LgcFrameworkKotlinKClass>)baseClass defaultSerializerProvider:(id<LgcFrameworkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface LgcFrameworkKtor_httpUrl : LgcFrameworkBase
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<LgcFrameworkKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) LgcFrameworkKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface LgcFrameworkKtor_httpHttpMethod : LgcFrameworkBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol LgcFrameworkKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LgcFrameworkKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol LgcFrameworkKtor_httpHeaders <LgcFrameworkKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface LgcFrameworkKtor_httpOutgoingContent : LgcFrameworkBase
- (id _Nullable)getPropertyKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(LgcFrameworkKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<LgcFrameworkKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) LgcFrameworkLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) LgcFrameworkKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<LgcFrameworkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol LgcFrameworkKotlinx_coroutines_coreJob <LgcFrameworkKotlinCoroutineContextElement>
@required
- (id<LgcFrameworkKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<LgcFrameworkKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(LgcFrameworkKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (LgcFrameworkKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<LgcFrameworkKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(LgcFrameworkKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<LgcFrameworkKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(LgcFrameworkKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<LgcFrameworkKotlinx_coroutines_coreJob>)plusOther_:(id<LgcFrameworkKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<LgcFrameworkKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<LgcFrameworkKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface LgcFrameworkKtor_httpHttpStatusCode : LgcFrameworkBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (LgcFrameworkKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface LgcFrameworkKtor_utilsGMTDate : LgcFrameworkBase <LgcFrameworkKotlinComparable>
@property (class, readonly, getter=companion) LgcFrameworkKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(LgcFrameworkKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (LgcFrameworkKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (LgcFrameworkKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (LgcFrameworkKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(LgcFrameworkKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(LgcFrameworkKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) LgcFrameworkKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) LgcFrameworkKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface LgcFrameworkKtor_httpHttpProtocolVersion : LgcFrameworkBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (LgcFrameworkKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol LgcFrameworkKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<LgcFrameworkKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface LgcFrameworkKotlinAbstractCoroutineContextKey<B, E> : LgcFrameworkBase <LgcFrameworkKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<LgcFrameworkKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<LgcFrameworkKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcherKey : LgcFrameworkKotlinAbstractCoroutineContextKey<id<LgcFrameworkKotlinContinuationInterceptor>, LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<LgcFrameworkKotlinCoroutineContextKey>)baseKey safeCast:(id<LgcFrameworkKotlinCoroutineContextElement> _Nullable (^)(id<LgcFrameworkKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol LgcFrameworkKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol LgcFrameworkKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(LgcFrameworkKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(LgcFrameworkLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(LgcFrameworkKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(LgcFrameworkLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(LgcFrameworkKtor_ioChunkBuffer *)dst completionHandler:(void (^)(LgcFrameworkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(LgcFrameworkKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(LgcFrameworkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(LgcFrameworkKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(LgcFrameworkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(LgcFrameworkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(LgcFrameworkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(LgcFrameworkByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(LgcFrameworkDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(LgcFrameworkFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(LgcFrameworkKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(LgcFrameworkKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(LgcFrameworkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(LgcFrameworkLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(LgcFrameworkKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(LgcFrameworkKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<LgcFrameworkKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(LgcFrameworkShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<LgcFrameworkKotlinSuspendFunction1>)consumer completionHandler:(void (^)(LgcFrameworkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<LgcFrameworkKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(LgcFrameworkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) LgcFrameworkKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol LgcFrameworkKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<LgcFrameworkKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<LgcFrameworkKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<LgcFrameworkKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LgcFrameworkKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface LgcFrameworkKtor_utilsStringValuesBuilderImpl : LgcFrameworkBase <LgcFrameworkKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<LgcFrameworkKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<LgcFrameworkKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<LgcFrameworkKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LgcFrameworkKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) LgcFrameworkMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface LgcFrameworkKtor_httpHeadersBuilder : LgcFrameworkKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<LgcFrameworkKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface LgcFrameworkKtor_client_coreHttpRequestBuilderCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface LgcFrameworkKtor_httpURLBuilder : LgcFrameworkBase
- (instancetype)initWithProtocol:(LgcFrameworkKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<LgcFrameworkKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (LgcFrameworkKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<LgcFrameworkKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<LgcFrameworkKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property LgcFrameworkKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface LgcFrameworkKtor_utilsTypeInfo : LgcFrameworkBase
- (instancetype)initWithType:(id<LgcFrameworkKotlinKClass>)type reifiedType:(id<LgcFrameworkKotlinKType>)reifiedType kotlinType:(id<LgcFrameworkKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<LgcFrameworkKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<LgcFrameworkKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<LgcFrameworkKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (LgcFrameworkKtor_utilsTypeInfo *)doCopyType:(id<LgcFrameworkKotlinKClass>)type reifiedType:(id<LgcFrameworkKotlinKType>)reifiedType kotlinType:(id<LgcFrameworkKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LgcFrameworkKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<LgcFrameworkKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<LgcFrameworkKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface LgcFrameworkKtor_client_coreHttpClientCallCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol LgcFrameworkKtor_client_coreHttpRequest <LgcFrameworkKtor_httpHttpMessage, LgcFrameworkKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<LgcFrameworkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LgcFrameworkKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) LgcFrameworkKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LgcFrameworkKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface LgcFrameworkKoin_coreKind : LgcFrameworkKotlinEnum<LgcFrameworkKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LgcFrameworkKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) LgcFrameworkKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) LgcFrameworkKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (LgcFrameworkKotlinArray<LgcFrameworkKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface LgcFrameworkKoin_coreCallbacks<T> : LgcFrameworkBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (LgcFrameworkKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface LgcFrameworkKtor_httpUrlCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol LgcFrameworkKtor_httpParameters <LgcFrameworkKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface LgcFrameworkKtor_httpURLProtocol : LgcFrameworkBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface LgcFrameworkKtor_httpHttpMethodCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<LgcFrameworkKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) LgcFrameworkKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol LgcFrameworkKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface LgcFrameworkKtor_httpHeaderValueWithParameters : LgcFrameworkBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<LgcFrameworkKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<LgcFrameworkKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface LgcFrameworkKtor_httpContentType : LgcFrameworkKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<LgcFrameworkKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<LgcFrameworkKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(LgcFrameworkKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (LgcFrameworkKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (LgcFrameworkKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol LgcFrameworkKotlinx_coroutines_coreChildHandle <LgcFrameworkKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(LgcFrameworkKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<LgcFrameworkKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol LgcFrameworkKotlinx_coroutines_coreChildJob <LgcFrameworkKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<LgcFrameworkKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol LgcFrameworkKotlinSequence
@required
- (id<LgcFrameworkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol LgcFrameworkKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<LgcFrameworkKotlinx_coroutines_coreSelectInstance>)select block:(id<LgcFrameworkKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface LgcFrameworkKtor_httpHttpStatusCodeCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) LgcFrameworkKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<LgcFrameworkKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface LgcFrameworkKtor_utilsGMTDateCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface LgcFrameworkKtor_utilsWeekDay : LgcFrameworkKotlinEnum<LgcFrameworkKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) LgcFrameworkKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface LgcFrameworkKtor_utilsMonth : LgcFrameworkKotlinEnum<LgcFrameworkKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) LgcFrameworkKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (LgcFrameworkKotlinArray<LgcFrameworkKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface LgcFrameworkKtor_httpHttpProtocolVersionCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (LgcFrameworkKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) LgcFrameworkKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface LgcFrameworkKtor_ioMemory : LgcFrameworkBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(LgcFrameworkKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(LgcFrameworkKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (LgcFrameworkKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (LgcFrameworkKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface LgcFrameworkKtor_ioBuffer : LgcFrameworkBase
- (instancetype)initWithMemory:(LgcFrameworkKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (LgcFrameworkKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(LgcFrameworkKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) LgcFrameworkKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface LgcFrameworkKtor_ioChunkBuffer : LgcFrameworkKtor_ioBuffer
- (instancetype)initWithMemory:(LgcFrameworkKtor_ioMemory *)memory origin:(LgcFrameworkKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<LgcFrameworkKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(LgcFrameworkKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (LgcFrameworkKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (LgcFrameworkKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<LgcFrameworkKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) LgcFrameworkKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) LgcFrameworkKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface LgcFrameworkKotlinByteArray : LgcFrameworkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(LgcFrameworkByte *(^)(LgcFrameworkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (LgcFrameworkKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface LgcFrameworkKtor_ioInput : LgcFrameworkBase <LgcFrameworkKtor_ioCloseable>
- (instancetype)initWithHead:(LgcFrameworkKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<LgcFrameworkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (LgcFrameworkKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(LgcFrameworkKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(LgcFrameworkKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(LgcFrameworkKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<LgcFrameworkKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<LgcFrameworkKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<LgcFrameworkKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface LgcFrameworkKtor_ioByteReadPacket : LgcFrameworkKtor_ioInput
- (instancetype)initWithHead:(LgcFrameworkKtor_ioChunkBuffer *)head pool:(id<LgcFrameworkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(LgcFrameworkKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<LgcFrameworkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LgcFrameworkKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (LgcFrameworkKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (LgcFrameworkKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(LgcFrameworkKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol LgcFrameworkKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (LgcFrameworkKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol LgcFrameworkKotlinSuspendFunction1 <LgcFrameworkKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol LgcFrameworkKotlinAppendable
@required
- (id<LgcFrameworkKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<LgcFrameworkKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<LgcFrameworkKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface LgcFrameworkKtor_httpURLBuilderCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol LgcFrameworkKtor_httpParametersBuilder <LgcFrameworkKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol LgcFrameworkKotlinKType
@required
@property (readonly) NSArray<LgcFrameworkKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<LgcFrameworkKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface LgcFrameworkKtor_httpURLProtocolCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) LgcFrameworkKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) LgcFrameworkKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) LgcFrameworkKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) LgcFrameworkKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) LgcFrameworkKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, LgcFrameworkKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface LgcFrameworkKtor_httpHeaderValueParam : LgcFrameworkBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface LgcFrameworkKtor_httpHeaderValueWithParametersCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<LgcFrameworkKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface LgcFrameworkKtor_httpContentTypeCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) LgcFrameworkKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol LgcFrameworkKotlinx_coroutines_coreParentJob <LgcFrameworkKotlinx_coroutines_coreJob>
@required
- (LgcFrameworkKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol LgcFrameworkKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<LgcFrameworkKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(LgcFrameworkKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(LgcFrameworkKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<LgcFrameworkKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol LgcFrameworkKotlinSuspendFunction0 <LgcFrameworkKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface LgcFrameworkKtor_utilsWeekDayCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (LgcFrameworkKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface LgcFrameworkKtor_utilsMonthCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (LgcFrameworkKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface LgcFrameworkKtor_ioMemoryCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface LgcFrameworkKtor_ioBufferCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol LgcFrameworkKtor_ioObjectPool <LgcFrameworkKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface LgcFrameworkKtor_ioChunkBufferCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<LgcFrameworkKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<LgcFrameworkKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface LgcFrameworkKotlinByteIterator : LgcFrameworkBase <LgcFrameworkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LgcFrameworkByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface LgcFrameworkKtor_ioInputCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface LgcFrameworkKtor_ioByteReadPacketCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LgcFrameworkKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface LgcFrameworkKotlinKTypeProjection : LgcFrameworkBase
- (instancetype)initWithVariance:(LgcFrameworkKotlinKVariance * _Nullable)variance type:(id<LgcFrameworkKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LgcFrameworkKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (LgcFrameworkKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<LgcFrameworkKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (LgcFrameworkKotlinKTypeProjection *)doCopyVariance:(LgcFrameworkKotlinKVariance * _Nullable)variance type:(id<LgcFrameworkKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LgcFrameworkKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) LgcFrameworkKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface LgcFrameworkKotlinx_coroutines_coreAtomicDesc : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface LgcFrameworkKotlinx_coroutines_coreOpDescriptor : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(LgcFrameworkKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : LgcFrameworkKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface LgcFrameworkKotlinKVariance : LgcFrameworkKotlinEnum<LgcFrameworkKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LgcFrameworkKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) LgcFrameworkKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) LgcFrameworkKotlinKVariance *out __attribute__((swift_name("out")));
+ (LgcFrameworkKotlinArray<LgcFrameworkKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface LgcFrameworkKotlinKTypeProjectionCompanion : LgcFrameworkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LgcFrameworkKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (LgcFrameworkKotlinKTypeProjection *)contravariantType:(id<LgcFrameworkKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (LgcFrameworkKotlinKTypeProjection *)covariantType:(id<LgcFrameworkKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (LgcFrameworkKotlinKTypeProjection *)invariantType:(id<LgcFrameworkKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) LgcFrameworkKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface LgcFrameworkKotlinx_coroutines_coreAtomicOp<__contravariant T> : LgcFrameworkKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode : LgcFrameworkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(LgcFrameworkBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(LgcFrameworkBoolean *(^)(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(LgcFrameworkBoolean *(^)(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(LgcFrameworkBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(LgcFrameworkBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : LgcFrameworkKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(LgcFrameworkKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(LgcFrameworkKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(LgcFrameworkKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(LgcFrameworkKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) LgcFrameworkKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
