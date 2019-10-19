//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLSource.h"

@class NSURL, UIImage;

@interface MGLImageSource : MGLSource
{
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)attributionHTMLString;
@property(readonly, nonatomic) struct ImageSource *rawSource;
- (id)description;
@property(nonatomic) struct MGLCoordinateQuad coordinates;
@property(copy, nonatomic) NSURL *URL;
- (id)initWithIdentifier:(id)arg1 coordinateQuad:(struct MGLCoordinateQuad)arg2 image:(id)arg3;
- (id)initWithIdentifier:(id)arg1 coordinateQuad:(struct MGLCoordinateQuad)arg2 URL:(id)arg3;
- (id)initWithIdentifier:(id)arg1 coordinateQuad:(struct MGLCoordinateQuad)arg2;

@end
