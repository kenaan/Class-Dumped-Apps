//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapAdsAdMediaRenditionSelector;

@interface SCSnapAdsResponseJsonParser : NSObject
{
    SCSnapAdsAdMediaRenditionSelector *_adMediaRenditionSelector;
}

+ (id)parseStringListParam:(id)arg1 paramName:(id)arg2;
+ (id)parseRenditionsV2:(id)arg1 enableStreaming:(_Bool)arg2;
+ (id)parseRenditionsV1:(id)arg1;
+ (id)parseRenditionsWithRenditionsV1:(id)arg1 renditionsV2:(id)arg2 enableStreaming:(_Bool)arg3;
+ (id)parseMediaUrl:(id)arg1 adProductType:(unsigned long long)arg2 renditionSelector:(id)arg3 enableStreaming:(_Bool)arg4 adType:(long long)arg5;
+ (_Bool)mediaURLsValid:(id)arg1;
+ (id)parseAdToLensModel:(id)arg1;
+ (void)parseMultiSnapContentLists:(id)arg1 mediaUrls:(id)arg2 adSnapKeys:(id)arg3 mediaDurationsMillis:(id)arg4 adSnapTypes:(id)arg5 adProductType:(unsigned long long)arg6 renditionSelector:(id)arg7 experimentSettings:(id)arg8 adSnapKeyToAdToLensModelMap:(id)arg9 renditions:(id)arg10;
+ (id)_parseResponseJson:(id)arg1 adIdentifier:(id)arg2 serveItemId:(id)arg3 adServeRequestId:(id)arg4 adProductType:(unsigned long long)arg5 renditionSelector:(id)arg6 experimentSettings:(id)arg7 serveLoggingContext:(id)arg8 targetingParameters:(id)arg9;
+ (id)extractJsonData:(id)arg1;
+ (id)parseResponseData:(id)arg1 adIdentifier:(id)arg2 serveItemId:(id)arg3 adServeRequestId:(id)arg4 adProductType:(unsigned long long)arg5 renditionSelector:(id)arg6 experimentSettings:(id)arg7 serveLoggingContext:(id)arg8 targetingParameters:(id)arg9;
@property(readonly, nonatomic) SCSnapAdsAdMediaRenditionSelector *adMediaRenditionSelector; // @synthesize adMediaRenditionSelector=_adMediaRenditionSelector;
- (void).cxx_destruct;
- (id)parseResponseData:(id)arg1 adIdentifier:(id)arg2 serveItemId:(id)arg3 adServeRequestId:(id)arg4 adProductType:(unsigned long long)arg5 experimentSettings:(id)arg6 serveLoggingContext:(id)arg7 targetingParameters:(id)arg8;
- (id)initWithRenditionSelector:(id)arg1;

@end
