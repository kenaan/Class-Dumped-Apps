//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJURichStoryRichStoryDeepLinkAttachment <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *deepLinkFallbackType;
@property(readonly, copy, nonatomic) NSString *deepLinkWebFallbackUrl;
@property(readonly, copy, nonatomic) NSString *tapLinkActionText;
@property(readonly, copy, nonatomic) NSString *androidPackageId;
@property(readonly, copy, nonatomic) NSString *androidAppIcon;
@property(readonly, copy, nonatomic) NSNumber *iosAppId;
@property(readonly, copy, nonatomic) NSString *iosAppIcon;
@property(readonly, copy, nonatomic) NSString *inAppBackground;
@property(readonly, copy, nonatomic) NSString *appTitle;
@property(readonly, copy, nonatomic) NSNumber *inAppMode;
@property(readonly, copy, nonatomic) NSString *uri;
@end
