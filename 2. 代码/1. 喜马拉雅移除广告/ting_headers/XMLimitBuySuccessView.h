//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface XMLimitBuySuccessView : UIView
{
    CDUnknownBlockType _buttonDidClick;
    UIView *_mask;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(copy, nonatomic) CDUnknownBlockType buttonDidClick; // @synthesize buttonDidClick=_buttonDidClick;
- (void).cxx_destruct;
- (void)closeClick:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)show:(_Bool)arg1;
- (void)updateUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

