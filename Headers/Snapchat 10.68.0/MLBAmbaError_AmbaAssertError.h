//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBAmbaError_AmbaAssertError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backtrace; // @dynamic backtrace;
@property(copy, nonatomic) NSString *file; // @dynamic file;
@property(copy, nonatomic) NSString *function; // @dynamic function;
@property(nonatomic) _Bool hasBacktrace; // @dynamic hasBacktrace;
@property(nonatomic) _Bool hasFile; // @dynamic hasFile;
@property(nonatomic) _Bool hasFunction; // @dynamic hasFunction;
@property(nonatomic) _Bool hasLineNumber; // @dynamic hasLineNumber;
@property(nonatomic) unsigned int lineNumber; // @dynamic lineNumber;

@end

