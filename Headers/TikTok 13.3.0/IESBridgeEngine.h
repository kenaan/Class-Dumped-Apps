//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol IESBridgeEngineDelegate, IESBridgeExecutor;

@interface IESBridgeEngine : NSObject
{
    id <IESBridgeExecutor> _executor;
    id <IESBridgeEngineDelegate> _delegate;
    NSMutableArray *_internalMethods;
}

+ (void)addGlobalMethod:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSMutableArray *internalMethods; // @synthesize internalMethods=_internalMethods;
@property(nonatomic) __weak id <IESBridgeEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IESBridgeExecutor> executor; // @synthesize executor=_executor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *methods;
- (void)p_sendBridgeMessage:(id)arg1;
- (void)p_sendCallback:(id)arg1 params:(id)arg2;
- (void)p_executeMethod:(id)arg1 withMessage:(id)arg2;
- (void)sendEvent:(id)arg1 params:(id)arg2;
- (void)p_executeMethodsWithMessage:(id)arg1;
- (void)removeAllMethods;
- (void)addMethod:(id)arg1;
- (id)init;

@end
