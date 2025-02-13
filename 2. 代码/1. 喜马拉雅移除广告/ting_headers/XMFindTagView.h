//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, XMTagItem, XMTouchImageView, XMWebImageView;
@protocol XMFindTagViewDelegate;

@interface XMFindTagView : UIView
{
    XMTouchImageView *touchView;
    UILabel *_label;
    id <XMFindTagViewDelegate> delegate;
    XMTagItem *tagItem;
    XMWebImageView *_imageView;
}

@property(retain, nonatomic) XMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) XMTagItem *tagItem; // @synthesize tagItem;
@property(nonatomic) __weak id <XMFindTagViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)onClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

