//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HTSVastNetworkDelegate;

@interface HTSVastService : NSObject
{
    id <HTSVastNetworkDelegate> _networkDelegate;
}

+ (id)sharedService;
@property(nonatomic) __weak id <HTSVastNetworkDelegate> networkDelegate; // @synthesize networkDelegate=_networkDelegate;
- (void).cxx_destruct;

@end

