//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveUserModel, NSDictionary, RACCommand;

@interface HTSLiveGiftSegue : NSObject
{
    _Bool _linkMicOnly;
    _Bool _disablePackage;
    _Bool _disableFansclub;
    _Bool _disableHonorLevel;
    IESLiveUserModel *_toUser;
    NSDictionary *_extraTrackDict;
    RACCommand *_showContributeListCmd;
    RACCommand *_showProfileCmd;
}

@property(retain, nonatomic) RACCommand *showProfileCmd; // @synthesize showProfileCmd=_showProfileCmd;
@property(retain, nonatomic) RACCommand *showContributeListCmd; // @synthesize showContributeListCmd=_showContributeListCmd;
@property(retain, nonatomic) NSDictionary *extraTrackDict; // @synthesize extraTrackDict=_extraTrackDict;
@property(retain, nonatomic) IESLiveUserModel *toUser; // @synthesize toUser=_toUser;
@property(nonatomic) _Bool disableHonorLevel; // @synthesize disableHonorLevel=_disableHonorLevel;
@property(nonatomic) _Bool disableFansclub; // @synthesize disableFansclub=_disableFansclub;
@property(nonatomic) _Bool disablePackage; // @synthesize disablePackage=_disablePackage;
@property(nonatomic) _Bool linkMicOnly; // @synthesize linkMicOnly=_linkMicOnly;
- (void).cxx_destruct;

@end

