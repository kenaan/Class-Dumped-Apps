//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

@class MdxUiMenuListSectionViewModel, NSIndexPath, NSNumber, NSObject, NSString;
@protocol MdxTarget;

@interface MdxUiMenuListItemViewModel : NFLXGeneratedObject
{
    MdxUiMenuListSectionViewModel *_section;
    _Bool _disabled;
    _Bool _selected;
    NSIndexPath *_indexPath;
    NSString *_menuName;
    NSString *_name;
    NSObject<MdxTarget> *_device;
    NSString *_reuseIdentifier;
    NSNumber *_height;
}

@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSObject<MdxTarget> *device; // @synthesize device=_device;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithDictionary:(id)arg1 section:(id)arg2;

@end

