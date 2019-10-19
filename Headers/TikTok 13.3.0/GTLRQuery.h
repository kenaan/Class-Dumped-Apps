//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTLRQueryProtocol-Protocol.h"
#import "GTLRRuntimeCommon-Protocol.h"
#import "NSCopying-Protocol.h"

@class GTLRObject, GTLRServiceExecutionParameters, GTLRUploadParameters, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface GTLRQuery : NSObject <GTLRRuntimeCommon, GTLRQueryProtocol, NSCopying>
{
    NSMutableDictionary *_childCache;
    GTLRServiceExecutionParameters *_executionParameters;
    _Bool _queryInvalid;
    _Bool _shouldSkipAuthorization;
    _Bool _useMediaDownloadService;
    NSDictionary *_additionalURLQueryParameters;
    NSDictionary *_additionalHTTPHeaders;
    GTLRObject *_bodyObject;
    CDUnknownBlockType _completionBlock;
    NSString *_downloadAsDataObjectType;
    Class _expectedObjectClass;
    NSString *_httpMethod;
    NSMutableDictionary *_json;
    NSString *_loggingName;
    NSArray *_pathParameterNames;
    NSString *_pathURITemplate;
    NSString *_requestID;
    NSString *_resumableUploadPathURITemplateOverride;
    NSString *_simpleUploadPathURITemplateOverride;
    GTLRUploadParameters *_uploadParameters;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (Class)ancestorClass;
+ (id)arrayPropertyToClassMapForClass:(Class)arg1;
+ (id)propertyToJSONKeyMapForClass:(Class)arg1;
+ (void)initialize;
+ (id)arrayPropertyToClassMap;
+ (id)parameterNameMap;
+ (id)nextRequestID;
@property _Bool useMediaDownloadService; // @synthesize useMediaDownloadService=_useMediaDownloadService;
@property(copy) GTLRUploadParameters *uploadParameters; // @synthesize uploadParameters=_uploadParameters;
@property(copy) NSString *simpleUploadPathURITemplateOverride; // @synthesize simpleUploadPathURITemplateOverride=_simpleUploadPathURITemplateOverride;
@property _Bool shouldSkipAuthorization; // @synthesize shouldSkipAuthorization=_shouldSkipAuthorization;
@property(copy) NSString *resumableUploadPathURITemplateOverride; // @synthesize resumableUploadPathURITemplateOverride=_resumableUploadPathURITemplateOverride;
@property(copy) NSString *requestID; // @synthesize requestID=_requestID;
@property(getter=isQueryInvalid) _Bool queryInvalid; // @synthesize queryInvalid=_queryInvalid;
@property(readonly) NSString *pathURITemplate; // @synthesize pathURITemplate=_pathURITemplate;
@property(readonly) NSArray *pathParameterNames; // @synthesize pathParameterNames=_pathParameterNames;
@property(copy) NSString *loggingName; // @synthesize loggingName=_loggingName;
@property(retain, nonatomic) NSMutableDictionary *JSON; // @synthesize JSON=_json;
@property(readonly) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property Class expectedObjectClass; // @synthesize expectedObjectClass=_expectedObjectClass;
@property(copy) NSString *downloadAsDataObjectType; // @synthesize downloadAsDataObjectType=_downloadAsDataObjectType;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) GTLRObject *bodyObject; // @synthesize bodyObject=_bodyObject;
@property(copy) NSDictionary *additionalHTTPHeaders; // @synthesize additionalHTTPHeaders=_additionalHTTPHeaders;
@property(copy) NSDictionary *additionalURLQueryParameters; // @synthesize additionalURLQueryParameters=_additionalURLQueryParameters;
- (void).cxx_destruct;
- (id)objectClassResolver;
- (id)cacheChildForKey:(id)arg1;
- (void)setCacheChild:(id)arg1 forKey:(id)arg2;
- (id)JSONValueForKey:(id)arg1;
- (void)setJSONValue:(id)arg1 forKey:(id)arg2;
- (_Bool)hasExecutionParameters;
@property(retain) GTLRServiceExecutionParameters *executionParameters;
- (void)invalidateQuery;
- (_Bool)isBatchQuery;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPathURITemplate:(id)arg1 HTTPMethod:(id)arg2 pathParameterNames:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

