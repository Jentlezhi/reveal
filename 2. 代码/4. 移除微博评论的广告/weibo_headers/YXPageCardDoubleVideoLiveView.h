//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UIView, YXPageCardDoubleVideoLiveLeftRightView;

@interface YXPageCardDoubleVideoLiveView : WBPageCardViewBase
{
    YXPageCardDoubleVideoLiveLeftRightView *leftView;
    YXPageCardDoubleVideoLiveLeftRightView *rightView;
    UIView *whiteInflattedBkgView;
}

+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
- (void).cxx_destruct;
- (void)resetSubViewRects;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

