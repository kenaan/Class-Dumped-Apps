//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationCognacAttachmentBody : NSObject <NSCopying>
{
    NSString *_appId;
    NSString *_appDisplayName;
    NSString *_appLoadingImageUrl;
    NSString *_appIconImageUrl;
    NSString *_appLogoImageUrl;
    NSString *_appContentUrl;
}

@property(readonly, copy, nonatomic) NSString *appContentUrl; // @synthesize appContentUrl=_appContentUrl;
@property(readonly, copy, nonatomic) NSString *appLogoImageUrl; // @synthesize appLogoImageUrl=_appLogoImageUrl;
@property(readonly, copy, nonatomic) NSString *appIconImageUrl; // @synthesize appIconImageUrl=_appIconImageUrl;
@property(readonly, copy, nonatomic) NSString *appLoadingImageUrl; // @synthesize appLoadingImageUrl=_appLoadingImageUrl;
@property(readonly, copy, nonatomic) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppId:(id)arg1 appDisplayName:(id)arg2 appLoadingImageUrl:(id)arg3 appIconImageUrl:(id)arg4 appLogoImageUrl:(id)arg5 appContentUrl:(id)arg6;

@end

