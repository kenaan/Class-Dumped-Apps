//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CJPayBaseRequest : NSObject
{
}

+ (void)startRequestWithUrl:(id)arg1 requestParams:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (_Bool)isCustom;
+ (_Bool)isUseTestServer;
+ (id)configHost;
+ (id)customHost;
+ (id)createServerUrlString;
+ (id)deskServerUrlString;

@end

