//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESFalconCustomInterceptor-Protocol.h"

@class NSString;

@interface IESAdLandingChannelInterceptor : NSObject <IESFalconCustomInterceptor>
{
    _Bool _enable;
    NSString *_channelQueryKey;
    NSString *_gurdAccessKey;
}

@property(copy, nonatomic) NSString *gurdAccessKey; // @synthesize gurdAccessKey=_gurdAccessKey;
@property(copy, nonatomic) NSString *channelQueryKey; // @synthesize channelQueryKey=_channelQueryKey;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (id)falconDataForURLRequest:(id)arg1;
- (id)initWithGurdAccessKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

