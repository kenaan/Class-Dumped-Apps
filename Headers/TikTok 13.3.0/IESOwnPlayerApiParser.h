//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESOwnPlayerApiParser : NSObject
{
}

+ (id)MD5HashString:(id)arg1;
+ (id)signFromVideoID:(id)arg1 ts:(long long)arg2;
+ (CDUnknownBlockType)domainResponseConfigBlock;
+ (void)setDomainResponseConfigBlock:(CDUnknownBlockType)arg1;
+ (void)setDomainConfigBlock:(CDUnknownBlockType)arg1;
+ (id)urlWithVideoId:(id)arg1;
+ (void)setCommonParamBlock:(CDUnknownBlockType)arg1;
+ (void)setApiPrefix:(id)arg1;
+ (void)setUserKey:(id)arg1 secretKey:(id)arg2;

@end

