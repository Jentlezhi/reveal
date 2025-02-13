//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIBezierPath, UIImageView, UILabel;
@protocol XMNoviceGuideViewDelegate;

@interface XMNoviceGuideView : UIView
{
    NSString *_msg;
    struct CGRect _operatedRect;
    int _arrowType;
    int _displayMode;
    UIImageView *_msgIV;
    UIImageView *_arrowIV;
    UILabel *_msgLB;
    CAShapeLayer *_bkgLayer;
    _Bool _didClickFocusAreaFlag;
    _Bool _hiddenTipBox;
    CDUnknownBlockType _dismissBlock;
    UIBezierPath *_focusAreaPath;
    CDUnknownBlockType _didClickFocusArea;
    id <XMNoviceGuideViewDelegate> _delegate;
}

+ (id)searchHitViewAtPoint:(struct CGPoint)arg1 fromView:(id)arg2;
+ (id)showWithMessage:(id)arg1 pointTo:(struct CGRect)arg2 addTarget:(id)arg3 inContent:(id)arg4 arrowType:(int)arg5 displayMode:(int)arg6;
+ (id)showWithMessage:(id)arg1 pointTo:(struct CGRect)arg2 addTarget:(id)arg3 arrowType:(int)arg4 displayMode:(int)arg5;
+ (id)showWithMessage:(id)arg1 pointTo:(struct CGRect)arg2 addTarget:(id)arg3;
@property(nonatomic) __weak id <XMNoviceGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hiddenTipBox; // @synthesize hiddenTipBox=_hiddenTipBox;
@property(copy, nonatomic) CDUnknownBlockType didClickFocusArea; // @synthesize didClickFocusArea=_didClickFocusArea;
@property(retain, nonatomic) UIBezierPath *focusAreaPath; // @synthesize focusAreaPath=_focusAreaPath;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)autoHideView;
- (void)hideNoviceGuideAnimated:(_Bool)arg1;
- (void)showNoviceGuideAnimated:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutInit;
- (void)updateUIStyle;
- (void)customInit;
- (id)initWithMessage:(id)arg1 pointTo:(struct CGRect)arg2 addTarget:(id)arg3 inContent:(id)arg4 arrowType:(int)arg5 displayMode:(int)arg6;
- (id)initWithMessage:(id)arg1 pointTo:(struct CGRect)arg2 addTarget:(id)arg3 arrowType:(int)arg4 displayMode:(int)arg5;
- (void)dealloc;

@end

