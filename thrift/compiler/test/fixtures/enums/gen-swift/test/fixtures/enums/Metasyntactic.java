/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.enums;

import com.facebook.swift.codec.*;
import org.apache.thrift.TException;
import org.apache.thrift.protocol.TProtocol;

@SwiftGenerated
public enum Metasyntactic implements com.facebook.thrift.payload.ThriftSerializable {
    FOO(1),
    BAR(2),
    BAZ(3),
    BAX(4);

    private final int value;

    Metasyntactic(int value) {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue() {
        return value;
    }

    public static Metasyntactic fromInteger(int n) {
        switch (n) {
        case 1:
            return FOO;
        case 2:
            return BAR;
        case 3:
            return BAZ;
        case 4:
            return BAX;
        default:
            return null;
        }
    }

    public static com.facebook.thrift.payload.Reader<Metasyntactic> asReader() {
        return Metasyntactic::read0;
    }

    public static Metasyntactic read0(TProtocol iprot) throws TException {
        return Metasyntactic.fromInteger(iprot.readI32());
    }

    public void write0(TProtocol oprot) throws TException {
        oprot.writeI32(getValue());
    }


}
