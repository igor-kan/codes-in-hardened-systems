"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1174."""

def spec_graphene_hardened_malloc_1174() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1174, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1174():
    s = spec_graphene_hardened_malloc_1174()
    assert s["spec_id"] == 1174
