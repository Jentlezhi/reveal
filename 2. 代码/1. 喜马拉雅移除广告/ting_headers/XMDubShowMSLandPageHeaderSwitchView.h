//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface XMDubShowMSLandPageHeaderSwitchView : UIView
{
    NSString *_leftTitle;
    NSString *_rightTitle;
    CDUnknownBlockType _scrollToIndex;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy, nonatomic) CDUnknownBlockType scrollToIndex; // @synthesize scrollToIndex=_scrollToIndex;
- (void).cxx_destruct;
- (void)p_handleTapGesture:(id)arg1;
- (void)p_handlePanGesture:(id)arg1;
- (void)scrollToIndex:(unsigned long long)arg1 animation:(_Bool)arg2;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1 leftTitle:(id)arg2 rightTitle:(id)arg3;

@end

