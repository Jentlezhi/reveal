//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKViewElement.h"

@class UIImage;

@interface WBImageElement : KKViewElement
{
    _Bool _displaying;
    UIImage *_defaultImage;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)display;
- (void)loadComplete:(id)arg1 url:(id)arg2;
- (void)obtainView:(id)arg1;
- (void)changedKey:(id)arg1;
- (void)setView:(id)arg1;
- (Class)viewClass;
- (id)init;

@end

