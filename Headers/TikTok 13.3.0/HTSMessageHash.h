//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HTSMessageHash : NSObject
{
    NSMutableDictionary *p_hash;
    _Bool p_needCleanUp;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (id)getKeyMessageList:(id)arg1;
- (_Bool)unregisterKeyMessage:(id)arg1;
- (_Bool)unregisterMessage:(id)arg1 forKey:(id)arg2;
- (_Bool)registerMessage:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

