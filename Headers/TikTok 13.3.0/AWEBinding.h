//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSThread;

@interface AWEBinding : NSObject
{
    _Bool _boundFlag;
    _Bool _everyTimeChangeFlag;
    _Bool _deliverOnMainThreadFlag;
    id _observer;
    id _receiver;
    NSString *_observerKeyPath;
    NSString *_receiverKeyPath;
    CDUnknownBlockType _handlerBlock;
    CDUnknownBlockType _transformBlock;
    NSThread *_hostThread;
}

+ (_Bool)isDebug;
+ (void)stopDebug;
+ (void)openDebug;
@property __weak NSThread *hostThread; // @synthesize hostThread=_hostThread;
@property _Bool deliverOnMainThreadFlag; // @synthesize deliverOnMainThreadFlag=_deliverOnMainThreadFlag;
@property _Bool everyTimeChangeFlag; // @synthesize everyTimeChangeFlag=_everyTimeChangeFlag;
@property _Bool boundFlag; // @synthesize boundFlag=_boundFlag;
@property(copy) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(copy) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(retain) NSString *receiverKeyPath; // @synthesize receiverKeyPath=_receiverKeyPath;
@property(retain) NSString *observerKeyPath; // @synthesize observerKeyPath=_observerKeyPath;
@property __weak id receiver; // @synthesize receiver=_receiver;
@property __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)debugForHandlerBlock:(id)arg1 newValue:(id)arg2 transformValue:(id)arg3 stage:(id)arg4;
- (void)debugForSetter:(id)arg1 newValue:(id)arg2 transformValue:(id)arg3 stage:(id)arg4;
- (void)excuteSetterOneArgs:(id)arg1;
- (void)excuteSetterWithOldValue:(id)arg1 newValue:(id)arg2 transformValue:(id)arg3 stage:(id)arg4 handlerBlock:(CDUnknownBlockType)arg5;
- (void)deliverThreadExcuteSetterWithOldValue:(id)arg1 newValue:(id)arg2 transformValue:(id)arg3 stage:(id)arg4 handlerBlock:(CDUnknownBlockType)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupInitialValue;
- (void)addHandler:(CDUnknownBlockType)arg1;
- (id)addTransformBlock:(CDUnknownBlockType)arg1;
- (id)receiver:(id)arg1 receiverKeyPath:(id)arg2;
- (id)observer:(id)arg1 observerKeyPath:(id)arg2;
- (id)init;
- (id)deliverOnMainThread;
- (id)everyTimeChange;
- (void)unbind:(_Bool)arg1 withObserver:(id)arg2;
- (void)unbind:(_Bool)arg1;
- (void)unbind;
- (void)bind:(_Bool)arg1;

@end

