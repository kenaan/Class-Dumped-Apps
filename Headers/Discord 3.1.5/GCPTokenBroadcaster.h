//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCPCopresenceManager, NSArray;

@interface GCPTokenBroadcaster : NSObject
{
    GCPCopresenceManager *_manager;
    NSArray *_directives;
}

@property(retain, nonatomic) NSArray *directives; // @synthesize directives=_directives;
@property(nonatomic) __weak GCPCopresenceManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCopresenceManager:(id)arg1 mediums:(long long)arg2 tokenData:(id)arg3;

@end
