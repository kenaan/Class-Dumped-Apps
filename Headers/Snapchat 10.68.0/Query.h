//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface Query : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double centralityScore; // @dynamic centralityScore;
@property(nonatomic) double similarityScore; // @dynamic similarityScore;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(copy, nonatomic) NSString *term; // @dynamic term;

@end

