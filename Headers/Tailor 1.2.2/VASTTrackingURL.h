//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPVASTDurationOffset, NSURL;

@interface VASTTrackingURL : NSObject
{
    NSURL *_url;
    MPVASTDurationOffset *_progressOffset;
}

@property(retain, nonatomic) MPVASTDurationOffset *progressOffset; // @synthesize progressOffset=_progressOffset;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end
