//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBMessageCenterNotificationSettingTipConfig : NSObject
{
    double _areaHeight;
    double _textLeftPadding;
    double _rightButtonAreaWidth;
    double _leftTextRightButtonAreaSpacing;
    double _titleDescriptionVerticalSpacing;
    double _titleDescriptionVerticalSpacingOffset;
    double _buttonDescriptionVerticalSpacing;
    double _buttonIconWidth;
    double _titleFont;
    double _titleDescriptionFont;
    double _buttonTitleFont;
}

@property double buttonTitleFont; // @synthesize buttonTitleFont=_buttonTitleFont;
@property double titleDescriptionFont; // @synthesize titleDescriptionFont=_titleDescriptionFont;
@property double titleFont; // @synthesize titleFont=_titleFont;
@property double buttonIconWidth; // @synthesize buttonIconWidth=_buttonIconWidth;
@property double buttonDescriptionVerticalSpacing; // @synthesize buttonDescriptionVerticalSpacing=_buttonDescriptionVerticalSpacing;
@property double titleDescriptionVerticalSpacingOffset; // @synthesize titleDescriptionVerticalSpacingOffset=_titleDescriptionVerticalSpacingOffset;
@property double titleDescriptionVerticalSpacing; // @synthesize titleDescriptionVerticalSpacing=_titleDescriptionVerticalSpacing;
@property double leftTextRightButtonAreaSpacing; // @synthesize leftTextRightButtonAreaSpacing=_leftTextRightButtonAreaSpacing;
@property double rightButtonAreaWidth; // @synthesize rightButtonAreaWidth=_rightButtonAreaWidth;
@property double textLeftPadding; // @synthesize textLeftPadding=_textLeftPadding;
@property double areaHeight; // @synthesize areaHeight=_areaHeight;
- (id)initWithIPadScreen;
- (id)initWithIPhone6PlusScreen;
- (id)initWithIPhone6Screen;
- (id)initWithIPhone5Screen;

@end

