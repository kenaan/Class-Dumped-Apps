//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AWEBundle : NSObject
{
    NSMutableDictionary *_bundleStore;
}

+ (id)resourcesSearchBundleNames:(id)arg1;
+ (id)bundleWithName:(id)arg1;
+ (id)manager;
@property(retain, nonatomic) NSMutableDictionary *bundleStore; // @synthesize bundleStore=_bundleStore;
- (void).cxx_destruct;
- (id)bundleWithName:(id)arg1;

@end

