//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class IESLiveSettingEntityDictionary;

@interface IESLiveSettingEntity : NSProxy
{
    IESLiveSettingEntityDictionary *_innerDictionary;
}

@property(retain, nonatomic) IESLiveSettingEntityDictionary *innerDictionary; // @synthesize innerDictionary=_innerDictionary;
- (void).cxx_destruct;
- (id)propertyNameScanFromGetterSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithDic:(id)arg1 class:(Class)arg2;

@end

