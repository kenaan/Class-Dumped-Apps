//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveRouterNode-Protocol.h"

@class NSMutableArray, NSString, Protocol;

@interface HTSLiveRouterNode : NSObject <HTSLiveRouterNode>
{
    Protocol *_routeProtocol;
    NSMutableArray *_childNodes;
}

@property(retain, nonatomic) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(readonly, nonatomic) Protocol *routeProtocol; // @synthesize routeProtocol=_routeProtocol;
- (void).cxx_destruct;
- (id)routerConfirmsTo:(id)arg1;
- (void)addChildRouterNode:(id)arg1;
- (id)subRouterConfirmsTo:(id)arg1;
- (id)initWithRouterProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

