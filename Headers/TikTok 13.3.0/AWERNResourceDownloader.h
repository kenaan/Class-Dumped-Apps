//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

@interface AWERNResourceDownloader : NSObject
{
    NSURLSession *_session;
    NSString *_cacheDir;
}

+ (void)loadBundle;
+ (id)sharedDownloader;
+ (void)load;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)md5StringOfString:(id)arg1;
- (void)downloadRNFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

