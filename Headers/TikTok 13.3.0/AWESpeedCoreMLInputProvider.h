//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet;

@interface AWESpeedCoreMLInputProvider : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input1;
}

@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;

@end

