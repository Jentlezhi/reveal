//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface YXLiveTrueLoveRegimentalView : UIView
{
    UIImageView *_loveRegimentalBack;
    UILabel *_loveRegimentalNumLabel;
    UILabel *_loveRegimentalNameLabel;
    NSString *_loveRegimentalName;
    struct CGSize _trueLoveLevelSize;
}

+ (id)imageWithLoveRegimentalNum:(long long)arg1 loveRegimentalName:(id)arg2;
@property(retain, nonatomic) NSString *loveRegimentalName; // @synthesize loveRegimentalName=_loveRegimentalName;
@property(retain, nonatomic) UILabel *loveRegimentalNameLabel; // @synthesize loveRegimentalNameLabel=_loveRegimentalNameLabel;
@property(retain, nonatomic) UILabel *loveRegimentalNumLabel; // @synthesize loveRegimentalNumLabel=_loveRegimentalNumLabel;
@property(retain, nonatomic) UIImageView *loveRegimentalBack; // @synthesize loveRegimentalBack=_loveRegimentalBack;
@property(nonatomic) struct CGSize trueLoveLevelSize; // @synthesize trueLoveLevelSize=_trueLoveLevelSize;
- (void).cxx_destruct;
- (id)resizableImageWithName:(id)arg1;
- (double)computeLoveRegimentalWithName:(id)arg1;
- (double)setUploveRegimentalNum:(long long)arg1 loveRegimentalName:(id)arg2;
- (void)setupView;
- (id)initWithloveRegimentalNum:(long long)arg1 loveRegimentalName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

