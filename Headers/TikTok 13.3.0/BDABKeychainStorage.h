//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDABKeychainStorage : NSObject
{
    _Bool _useUserDefaultCache;
    NSString *_serviceName;
}

@property(nonatomic) _Bool useUserDefaultCache; // @synthesize useUserDefaultCache=_useUserDefaultCache;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (_Bool)removeAll;
- (_Bool)hasObjectForKey:(id)arg1;
- (_Bool)removeValueForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithServiceName:(id)arg1 useUserDefaultCache:(_Bool)arg2;

@end

