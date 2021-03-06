//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTBaseOperation.h"

@class NSArray, NSString, PHTPhenotypeCache;

@interface PHTSetExternalExperimentIDsOperation : PHTBaseOperation
{
    _Bool _isBundleScoped;
    PHTPhenotypeCache *_cache;
    NSArray *_experimentIDs;
    NSString *_moduleNamespace;
    long long _logSource;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long logSource; // @synthesize logSource=_logSource;
@property(nonatomic) _Bool isBundleScoped; // @synthesize isBundleScoped=_isBundleScoped;
@property(retain, nonatomic) NSString *moduleNamespace; // @synthesize moduleNamespace=_moduleNamespace;
@property(retain, nonatomic) NSArray *experimentIDs; // @synthesize experimentIDs=_experimentIDs;
@property(retain, nonatomic) PHTPhenotypeCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithWithCounterName:(id)arg1 logger:(id)arg2 database:(id)arg3 cache:(id)arg4 experimentIDs:(id)arg5 moduleNamespace:(id)arg6 isBundleScoped:(_Bool)arg7 logSource:(long long)arg8 callback:(CDUnknownBlockType)arg9;

@end

