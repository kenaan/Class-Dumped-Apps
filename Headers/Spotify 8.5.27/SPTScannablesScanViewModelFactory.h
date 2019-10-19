//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoaderFactory, SPTScannablesDependencies;
@protocol SPTScannablesRegistry;

@interface SPTScannablesScanViewModelFactory : NSObject
{
    id <SPTScannablesRegistry> _registry;
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTScannablesDependencies *_dependencies;
}

@property(retain, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) id <SPTScannablesRegistry> registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (id)createDefaultScannablesScanViewModelDelegateWithViewController:(id)arg1 imagePickerController:(id)arg2;
- (id)createScannablesScanViewModelWithSourceIdentifier:(id)arg1;
- (id)initWithRegistry:(id)arg1 dataLoaderFactory:(id)arg2 dependencies:(id)arg3;

@end
