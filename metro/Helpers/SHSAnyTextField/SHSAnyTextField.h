//
//  SHSPhoneTextField.h
//  PhoneComponentExample
//
//  Created by Willy on 18.04.13.
//  Copyright (c) 2013 SHS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SHSPhoneLogic.h"
#import "SHSPhoneNumberFormatter.h"
#import "SHSPhoneNumberFormatter+UserConfig.h"
#import "SHSPhoneTextField.h"

#import "SHSPhoneAnyFormatter.h"

/**
 Simple UITextField subclass to handle phone numbers formats
 ARC enabled.
*/
@interface SHSAnyTextField : UITextField
{
    SHSPhoneLogic *logicDelegateInherit;
}

/**
 SHSPhoneNumberFormatter instance.
 Use is to configure format properties.
*/
@property (readonly, strong) SHSPhoneAnyFormatter *formatter;

/**
 Formate a text and set it to a textfield.
*/
-(void) setFormattedText:(NSString *)text;

/**
 Return phone number without format. Ex: 89201235678
*/
-(NSString *) phoneNumber;

/**
 Return phone number without format and prefix
 */
-(NSString *) stringWithoutPrefix;
/**
 Block will be called when text changed
 */
typedef void (^SHSTextBlock)(UITextField *textField);
@property (nonatomic, copy) SHSTextBlock textDidChangeBlock;
@end

