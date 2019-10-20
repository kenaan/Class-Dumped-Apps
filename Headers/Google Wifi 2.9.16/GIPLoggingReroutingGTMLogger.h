//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMLogger.h"

@protocol GIPLogAppControl><GIPLogMultiplexing, GTMLogFilter;

@interface GIPLoggingReroutingGTMLogger : GTMLogger
{
    id <GIPLogAppControl><GIPLogMultiplexing> _logMultiplexer;
    id <GTMLogFilter> _stackTraceFilter;
    CDUnknownFunctionPointerType _callStackSymbolProvider;
}

@property(nonatomic) CDUnknownFunctionPointerType callStackSymbolProvider; // @synthesize callStackSymbolProvider=_callStackSymbolProvider;
- (void).cxx_destruct;
- (void)setFilter:(id)arg1;
- (id)filter;
- (void)setFormatter:(id)arg1;
- (id)formatter;
- (void)setWriter:(id)arg1;
- (id)writer;
- (void)logInternalFunc:(const char *)arg1 format:(id)arg2 valist:(char *)arg3 level:(int)arg4;
- (id)initWithLogMultiplexer:(id)arg1;
- (id)initWithLogMultiplexer:(id)arg1 stackTraceFilter:(id)arg2;

@end
