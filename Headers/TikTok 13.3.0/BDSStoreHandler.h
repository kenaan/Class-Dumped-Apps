//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface BDSStoreHandler : NSObject
{
    NSUserDefaults *_store;
}

+ (id)handlerWithSuiteName:(id)arg1;
@property(retain) NSUserDefaults *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)storeKey:(id)arg1;
- (id)fillStrategyForPlacement:(id)arg1;
- (void)setFillStrategy:(id)arg1 forPlacement:(id)arg2;
- (id)initWithSuiteName:(id)arg1;
- (id)init;

@end

