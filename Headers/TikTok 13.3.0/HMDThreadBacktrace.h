//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface HMDThreadBacktrace : NSObject
{
    _Bool _crashed;
    NSDictionary *_registers;
    NSDictionary *_exceptionRegister;
    unsigned long long _threadIndex;
    unsigned long long _threadID;
    NSString *_name;
    NSArray *_stackFrames;
}

+ (id)backtraceOfThread:(unsigned int)arg1 SkippedDepth:(unsigned long long)arg2;
+ (id)backtraceOfCurrentThreadSkippedDepth:(unsigned long long)arg1;
+ (id)backtraceOfAllThreads;
+ (id)_backtraceOfThread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2;
+ (id)backtraceOfThread:(unsigned int)arg1;
+ (id)backtraceOfCurrentThread;
+ (id)backtraceOfMainThread;
+ (void)load;
+ (unsigned int)mainThread;
@property(retain, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool crashed; // @synthesize crashed=_crashed;
@property(nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned long long threadIndex; // @synthesize threadIndex=_threadIndex;
@property(retain, nonatomic) NSDictionary *exceptionRegister; // @synthesize exceptionRegister=_exceptionRegister;
@property(retain, nonatomic) NSDictionary *registers; // @synthesize registers=_registers;
- (void).cxx_destruct;
- (id)description;
- (id)jsonObject;

@end

