/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import org.apache.thrift.TException;
import org.apache.thrift.protocol.TProtocol;

@SwiftGenerated
public enum TypedEnum implements com.facebook.thrift.payload.ThriftSerializable {
    VAL1(0),
    VAL2(1);

    private final int value;

    TypedEnum(int value) {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue() {
        return value;
    }

    public static TypedEnum fromInteger(int n) {
        switch (n) {
        case 0:
            return VAL1;
        case 1:
            return VAL2;
        default:
            return null;
        }
    }

    public static com.facebook.thrift.payload.Reader<TypedEnum> asReader() {
        return TypedEnum::read0;
    }

    public static TypedEnum read0(TProtocol iprot) throws TException {
        return TypedEnum.fromInteger(iprot.readI32());
    }

    public void write0(TProtocol oprot) throws TException {
        oprot.writeI32(getValue());
    }


}
