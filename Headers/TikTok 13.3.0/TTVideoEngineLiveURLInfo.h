//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTVideoEngineLiveURLInfo : NSObject
{
    NSString *_mainPlayURL;
    NSString *_backupPlayURL;
}

@property(copy, nonatomic) NSString *backupPlayURL; // @synthesize backupPlayURL=_backupPlayURL;
@property(copy, nonatomic) NSString *mainPlayURL; // @synthesize mainPlayURL=_mainPlayURL;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

