//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCNContentResolutionContentResolveExtractedParams : NSObject
{
    _Bool _isOriginalUrl;
    _Bool _isBoltFallbackServiceUrl;
    _Bool _wasSecondaryUrlAvailable;
    NSString *_contentId;
    NSNumber *_isFastStartEnabled;
    long long _originalUrlReason;
    long long _boltFallbackServiceUrlReason;
    NSNumber *_resolveTime;
}

+ (id)ContentResolveExtractedParamsWithContentId:(id)arg1 isFastStartEnabled:(id)arg2 isOriginalUrl:(_Bool)arg3 originalUrlReason:(long long)arg4 isBoltFallbackServiceUrl:(_Bool)arg5 boltFallbackServiceUrlReason:(long long)arg6 wasSecondaryUrlAvailable:(_Bool)arg7 resolveTime:(id)arg8;
@property(readonly, nonatomic) NSNumber *resolveTime; // @synthesize resolveTime=_resolveTime;
@property(readonly, nonatomic) _Bool wasSecondaryUrlAvailable; // @synthesize wasSecondaryUrlAvailable=_wasSecondaryUrlAvailable;
@property(readonly, nonatomic) long long boltFallbackServiceUrlReason; // @synthesize boltFallbackServiceUrlReason=_boltFallbackServiceUrlReason;
@property(readonly, nonatomic) _Bool isBoltFallbackServiceUrl; // @synthesize isBoltFallbackServiceUrl=_isBoltFallbackServiceUrl;
@property(readonly, nonatomic) long long originalUrlReason; // @synthesize originalUrlReason=_originalUrlReason;
@property(readonly, nonatomic) _Bool isOriginalUrl; // @synthesize isOriginalUrl=_isOriginalUrl;
@property(readonly, nonatomic) NSNumber *isFastStartEnabled; // @synthesize isFastStartEnabled=_isFastStartEnabled;
@property(readonly, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContentId:(id)arg1 isFastStartEnabled:(id)arg2 isOriginalUrl:(_Bool)arg3 originalUrlReason:(long long)arg4 isBoltFallbackServiceUrl:(_Bool)arg5 boltFallbackServiceUrlReason:(long long)arg6 wasSecondaryUrlAvailable:(_Bool)arg7 resolveTime:(id)arg8;

@end
