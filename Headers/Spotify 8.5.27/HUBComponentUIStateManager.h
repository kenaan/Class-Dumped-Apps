//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HUBComponentUIStateManager : NSObject
{
    NSMutableDictionary *_statesForComponentModelIdentifiers;
}

@property(readonly, nonatomic) NSMutableDictionary *statesForComponentModelIdentifiers; // @synthesize statesForComponentModelIdentifiers=_statesForComponentModelIdentifiers;
- (void).cxx_destruct;
- (void)removeSavedUIStateForComponentModel:(id)arg1;
- (id)restoreUIStateForComponentModel:(id)arg1;
- (void)saveUIState:(id)arg1 forComponentModel:(id)arg2;
- (id)init;

@end

