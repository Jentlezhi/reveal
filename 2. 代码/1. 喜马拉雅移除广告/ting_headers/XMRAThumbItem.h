//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, XMRAInsetItem, XMWebImageView;

@interface XMRAThumbItem : UIView
{
    XMWebImageView *_thumb;
    UIImageView *_mask;
    CDUnknownBlockType _thumbItemTouch;
    XMRAInsetItem *_insetItem;
}

@property(retain, nonatomic) XMRAInsetItem *insetItem; // @synthesize insetItem=_insetItem;
@property(copy, nonatomic) CDUnknownBlockType thumbItemTouch; // @synthesize thumbItemTouch=_thumbItemTouch;
@property(retain, nonatomic) UIImageView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) XMWebImageView *thumb; // @synthesize thumb=_thumb;
- (void).cxx_destruct;
- (void)setThumbImage:(id)arg1;
- (void)onThumbTouch;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

